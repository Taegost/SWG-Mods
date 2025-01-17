		<Page
			Location='259,238'
			MaximumSize='665,410'
			MinimumSize='665,410'
			Name='PermissionList'
			PackSize='1,1'
			RStyleDefault='rs_default'
			ScrollExtent='665,410'
			Size='665,410'
			UserMovable='true'
			Visible='false'
		>
			<Data
				addCancel='addPage.btnCancel'
				addInput='addPage.cmbInput'
				addOk='addPage.btnOk'
				addPg='addPage'
				buttonAdd='btnAdd'
				buttonclose='bg.mmc.close'
				buttonRemove='btnRemove'
				closebutton='btnclose'
				Name='CodeData'
				titleText='bg.caption.text'
				userList='list.lstList'
			/>
			<Page
				Location='80,122'
				MinimumSize='212,103'
				Name='addPage'
				OnShow='cmbInput.focus=true'
				PackLocation='cpc,cpc'
				PackSize='p,p'
				RStyleDefault='rs_default'
				ScrollExtent='469,169'
				Size='469,169'
				Visible='false'
			>
				<Data
					buttonclose='bg.mmc.close'
					Name='CodeData'
					widgetToFocus='cmbInput'
				/>
				<DataSource
					Name='dataInput'
				>
					<Data
						Name='Any'
						Text='Any'
					/>
					<Data
						Name='Mechanic'
						Text='Mechanic'
					/>
					<Data
						Name='Navigator'
						Text='Navigator'
					/>
					<Data
						Name='Basketweaver'
						Text='Basketweaver'
					/>
					<Data
						Name='Mercenary'
						Text='Mercenary'
					/>
					<Data
						Name='Home Decorator'
						Text='Home Decorator'
					/>
				</DataSource>
				<ComboBox
					BackgroundOpacity='0.60'
					ButtonMargin='2,4,2,-6'
					ButtonStyle='/Styles.New.buttons.combo_arrow.style'
					ButtonWidth='14'
					DataSource='dataInput'
					DropDownHeight='256'
					Editable='true'
					ListStyle='/Styles.list.combo.style_all'
					Location='59,63'
					MinimumSize='0,27'
					Name='cmbInput'
					PackLocation='cpc,cpc'
					PackSize='p,f'
					RStyleDefault='/Styles.New.combo.combo1.rs_default'
					ScrollbarStyle='/Styles.scrollbar.default.vHud3.style'
					ScrollbarWidth='16'
					ScrollExtent='355,27'
					Size='355,27'
					TextboxMargin='0,1,0,0'
					TextboxStyle='/Styles.textbox.combo.Style_new'
				>
				</ComboBox>
				<Button
					IsCancelButton='true'
					LocalText='[@cancel]'
					Location='27,132'
					MinimumSize='0,27'
					Name='btnCancel'
					PackLocation='nfn,fff'
					PackSize='p,f'
					ScrollExtent='142,27'
					Size='142,27'
					Style='/Styles.New.buttons.hud.style'
					TextColor='#000000'
				>@cancel</Button>
				<Button
					IsDefaultButton='true'
					LocalText='[@ok]'
					Location='301,133'
					MinimumSize='0,27'
					Name='btnOk'
					PackLocation='fff,fff'
					PackSize='p,f'
					ScrollExtent='142,27'
					Size='142,27'
					Style='/Styles.New.buttons.hud.style'
					TextColor='#000000'
				>@ok</Button>
				<Page
					BackgroundColor='#FFFFFF'
					BackgroundOpacity='0.40'
					BackgroundTint='#00D6FB'
					Location='23,24'
					Name='box'
					PackLocation='nfn,nfn'
					PackSize='a,a'
					PalBgTint='back1'
					RStyleDefault='/Styles.New.pill_lrg.rs_default'
					ScrollExtent='425,100'
					Size='425,100'
				/>
				<Page
					Name='bg'
					PackLocation='nfn,nfn'
					PackSize='a,a'
					ScrollExtent='469,169'
					Size='469,169'
				>
					<Page
						Location='459,8'
						Name='mmc'
						PackLocation='fff,nfn'
						PackSize='f,f'
						RStyleDefault='/Styles.New.thin_mmc.rs_default'
						ScrollExtent='12,10'
						Size='12,10'
					>
						<Button
							BackgroundColor='#FFFFFF'
							BackgroundOpacity='0.80'
							DragType='uicommand'
							IsCancelButton='true'
							Location='-4,-3'
							Name='close'
							PackLocation='fff,cfc'
							PackSize='f,f'
							ScrollExtent='16,16'
							Size='16,16'
							Style='/Styles.Frame.buttonClose.style'
						></Button>
					</Page>
					<Page
						Name='caption'
						PackLocation='nfn,nfn'
						PackSize='a,f'
						ScrollExtent='329,16'
						Size='329,16'
					>
						<Text
							Enabled='false'
							Font='bold_18'
							LocalText='[@PERMISSION_ADD_TITLE]'
							Margin='6,0,0,0'
							MaxLines='1'
							Name='lblTitle'
							PackSize='a,f'
							PalText='titletext'
							ScrollExtent='329,19'
							Size='329,16'
							TextAlignmentVertical='Center'
							TextCapital='true'
							TextColor='#00354F'
						>@permission_add_title</Text>
					</Page>
					<Page
						BackgroundTint='#00D6FB'
						GetsInput='false'
						Location='1,0'
						Name='frame'
						PackLocation='nfn,nfn'
						PackSize='a,a'
						PalBgTint='baselight'
						RStyleDefault='/Styles.New.thin_in.rs_default'
						ScrollExtent='468,169'
						Selectable='true'
						Size='468,169'
					>
						<Page
							BackgroundColor='#FFFFFF'
							GetsInput='false'
							Location='1,0'
							Name='lines'
							PackSize='a,a'
							RStyleDefault='/Styles.space.boxes.generic4.rs_default'
							ScrollExtent='468,169'
							Size='468,169'
						>
							<Page
								BackgroundColor='#FFFFFF'
								GetsInput='false'
								Location='0,147'
								Name='outlineBL'
								OpacityRelativeMin='0.80'
								PackLocation='nfn,fff'
								PackSize='p,f'
								ScrollExtent='367,22'
								Size='367,22'
							>
								<Page
									BackgroundColor='#FFFFFF'
									BackgroundOpacity='1.00'
									BackgroundTint='#1CFFFF'
									GetsInput='false'
									Location='0,13'
									Name='outline1'
									OpacityRelativeMin='0.80'
									PackSize='a,a'
									PalBgTint='line1'
									RStyleDefault='/Styles.space.boxes.boxlinebottomLeft2.rs_default'
									ScrollExtent='367,9'
									Size='367,9'
								/>
							</Page>
							<Page
								BackgroundColor='#FFFFFF'
								GetsInput='false'
								Location='129,147'
								Name='outlineBR'
								OpacityRelativeMin='0.80'
								PackLocation='fff,fff'
								PackSize='p,f'
								RStyleDefault='/Styles.space.boxes.boxlineTopLeft.rs_default'
								ScrollExtent='339,22'
								Size='339,22'
							>
								<Page
									BackgroundColor='#FFFFFF'
									BackgroundOpacity='1.00'
									BackgroundTint='#1CFFFF'
									GetsInput='false'
									Location='0,13'
									Name='outline1'
									OpacityRelativeMin='0.80'
									PackSize='a,a'
									PalBgTint='line1'
									RStyleDefault='/Styles.space.boxes.boxlinebottomRight2.rs_default'
									ScrollExtent='339,9'
									Size='339,9'
								/>
							</Page>
							<Page
								BackgroundColor='#FFFFFF'
								GetsInput='false'
								Location='129,0'
								Name='outlineTR'
								OpacityRelativeMin='0.80'
								PackLocation='fff,nfn'
								PackSize='p,f'
								ScrollExtent='339,22'
								Size='339,22'
							>
								<Page
									BackgroundColor='#FFFFFF'
									BackgroundOpacity='1.00'
									BackgroundTint='#1CFFFF'
									GetsInput='false'
									Name='outline1'
									OpacityRelativeMin='0.80'
									PackSize='a,a'
									PalBgTint='line1'
									RStyleDefault='/Styles.space.boxes.boxlineTopRight2.rs_default'
									ScrollExtent='339,9'
									Size='339,9'
								/>
							</Page>
							<Page
								BackgroundColor='#FFFFFF'
								GetsInput='false'
								Name='outlineTL'
								OpacityRelativeMin='0.80'
								PackLocation='nfn,nfn'
								PackSize='p,f'
								RStyleDefault='/Styles.space.boxes.boxlineTopLeft.rs_default'
								ScrollExtent='367,22'
								Size='367,22'
							>
								<Page
									BackgroundColor='#FFFFFF'
									BackgroundOpacity='1.00'
									BackgroundTint='#1CFFFF'
									GetsInput='false'
									Name='outline1'
									OpacityRelativeMin='0.80'
									PackSize='a,a'
									PalBgTint='line1'
									RStyleDefault='/Styles.space.boxes.boxlineTopLeft2.rs_default'
									ScrollExtent='367,9'
									Size='367,9'
								/>
							</Page>
						</Page>
						<Page
							BackgroundOpacity='1.00'
							Location='-1,0'
							Name='top'
							PackLocation='nfn,nfn'
							PackSize='a,f'
							RStyleDefault='/Styles.New.main_TR.rs_default'
							ScrollExtent='469,29'
							Size='469,29'
						/>
						<Page
							BackgroundOpacity='1.00'
							Location='0,146'
							Name='bottom'
							PackLocation='nfn,fff'
							PackSize='a,f'
							RStyleDefault='/Styles.New.main_BR.rs_default'
							ScrollExtent='468,23'
							Size='468,23'
						/>
					</Page>
					<Page
						BackgroundOpacity='1.00'
						BackgroundTint='#00D6FB'
						GetsInput='false'
						Location='0,5'
						Name='back'
						PackLocation='nfn,nfn'
						PackSize='a,a'
						PalBgTint='back1'
						RStyleDefault='/Styles.New.thin_in.rs_default'
						ScrollExtent='469,161'
						Selectable='true'
						Size='469,161'
					/>
					<Page
						BackgroundOpacity='1.00'
						BackgroundTint='#00D6FB'
						GetsInput='false'
						Name='back'
						PackLocation='nfn,nfn'
						PackSize='a,a'
						PalBgTint='back1'
						RStyleDefault='/Styles.space.spaceglow.rs_default'
						ScrollExtent='469,169'
						Selectable='true'
						Size='469,169'
					/>
				</Page>
			</Page>
			<Page
				Location='11,30'
				Name='List'
				PackLocation='nfn,fff'
				PackSize='a,a'
				RStyleDefault='rs_default'
				ScrollExtent='647,330'
				Size='647,330'
			>
				<Scrollbar
					Control='lstList'
					Enabled='false'
					Location='632,11'
					Name='vScroll'
					PackLocation='fff'
					PackSize='f,a'
					ScrollExtent='11,312'
					Size='11,312'
					Style='/Styles.scrollbar.default.vHud4.style'
				>
				</Scrollbar>
				<DataSource
					Name='dataList'
					Size='128,64'
				>
					<Data
						Name='Marksman'
						Size='128,64'
						Text='xxx sample'
					/>
					<Data
						Name='Marksman'
						Size='128,64'
						Text='xxx sample'
					/>
				</DataSource>
				<List
					BackgroundColor='#000000'
					BackgroundOpacity='0.40'
					BackgroundTint='#00D6FB'
					DataSource='dataList'
					Location='5,8'
					MinimumScrollExtent='626,61'
					Name='lstList'
					PackSize='a,a'
					PalBgTint='back1'
					RStyleDefault='/Styles.New.pill_lrg.rs_default'
					ScrollExtent='626,315'
					SelectedRow='1'
					SelectedRowCount='1'
					SelectionAllowedMultiRow='false'
					Size='626,315'
					Style='/Styles.list.combo.style'
				/>
				<Page
					GetsInput='false'
					Name='outline'
					PackLocation='nfn,nfn'
					PackSize='a,a'
					ScrollExtent='647,330'
					Selectable='true'
					Size='647,330'
				>
					<Page
						BackgroundColor='#FFFFFF'
						BackgroundOpacity='0.90'
						BackgroundTint='#1CFFFF'
						Name='outline'
						PackLocation='nfn,nfn'
						PackSize='a,a'
						PalBgTint='line1'
						RStyleDefault='/Styles.New.whiteOutline_palW.rs_default'
						ScrollExtent='647,330'
						Size='647,330'
					/>
					<Page
						BackgroundColor='#FFFFFF'
						BackgroundOpacity='0.20'
						BackgroundTint='#01687E'
						Name='inFrame'
						PackLocation='nfn,nfn'
						PackSize='a,a'
						PalBgTint='back2'
						RStyleDefault='/Styles.New.fatFrameInside_palW.rs_default'
						ScrollExtent='645,330'
						Size='645,330'
					/>
				</Page>
			</Page>
			<Button
				IsDefaultButton='true'
				LocalText='[@close]'
				Location='476,375'
				MinimumSize='0,27'
				Name='btnClose'
				PackLocation='nfn,fff'
				PackSize='p,f'
				RStyleDefault='/Styles.buttons.hud_left.style'
				ScrollExtent='166,27'
				Size='166,27'
				Style='/Styles.New.buttons.hud.style'
				TextColor='#000000'
			>@close</Button>
			<Button
				LocalText='[@permission_remove]'
				Location='247,375'
				MinimumSize='0,27'
				Name='btnRemove'
				PackLocation='cpc,fff'
				PackSize='p,f'
				RStyleDefault='/Styles.buttons.hud_left.style'
				ScrollExtent='166,27'
				Size='166,27'
				Style='/Styles.New.buttons.hud.style'
				TextColor='#000000'
			>@permission_remove</Button>
			<Button
				LocalText='[@permission_add]'
				Location='29,375'
				MinimumSize='0,27'
				Name='btnAdd'
				PackLocation='fff,fff'
				PackSize='p,f'
				RStyleDefault='/Styles.buttons.hud_left.style'
				ScrollExtent='166,27'
				Size='166,27'
				Style='/Styles.New.buttons.hud.style'
				TextColor='#000000'
			>@permission_add</Button>
			<Page
				Name='bg'
				PackLocation='nfn,nfn'
				PackSize='a,a'
				ScrollExtent='665,410'
				Size='665,410'
			>
				<Page
					Location='654,8'
					Name='mmc'
					PackLocation='fff,nfn'
					PackSize='f,f'
					RStyleDefault='/Styles.New.thin_mmc.rs_default'
					ScrollExtent='12,10'
					Size='12,10'
				>
					<Button
						BackgroundColor='#FFFFFF'
						BackgroundOpacity='0.80'
						DragType='uicommand'
						IsCancelButton='true'
						Location='-3,-3'
						Name='close'
						PackLocation='fff,cfc'
						PackSize='f,f'
						ScrollExtent='16,16'
						Size='16,16'
						Style='/Styles.Frame.buttonClose.style'
					></Button>
				</Page>
				<Page
					MinimumSize='0,19'
					Name='caption'
					PackLocation='nfn,nfn'
					PackSize='a,f'
					ScrollExtent='525,19'
					Size='525,19'
				>
					<Text
						Enabled='false'
						Font='bold_18'
						LocalText='[@PERMISSION_TITLE]'
						Margin='6,-2,0,0'
						MaxLines='1'
						MinimumSize='0,19'
						Name='text'
						PackSize='a,f'
						PalText='titletext'
						ScrollExtent='525,19'
						Size='525,19'
						TextAlignmentVertical='Center'
						TextCapital='true'
						TextColor='#00354F'
					>@permission_title</Text>
				</Page>
				<Page
					BackgroundTint='#00D6FB'
					GetsInput='false'
					Location='1,0'
					Name='frame'
					PackLocation='nfn,nfn'
					PackSize='a,a'
					PalBgTint='baselight'
					RStyleDefault='/Styles.New.thin_in.rs_default'
					ScrollExtent='664,410'
					Selectable='true'
					Size='664,410'
				>
					<Page
						BackgroundColor='#FFFFFF'
						GetsInput='false'
						Location='1,0'
						Name='lines'
						PackSize='a,a'
						RStyleDefault='/Styles.space.boxes.generic4.rs_default'
						ScrollExtent='664,410'
						Size='664,410'
					>
						<Page
							BackgroundColor='#FFFFFF'
							GetsInput='false'
							Location='0,388'
							Name='outlineBL'
							OpacityRelativeMin='0.80'
							PackLocation='nfn,fff'
							PackSize='p,f'
							ScrollExtent='522,22'
							Size='522,22'
						>
							<Page
								BackgroundColor='#FFFFFF'
								BackgroundOpacity='1.00'
								BackgroundTint='#1CFFFF'
								GetsInput='false'
								Location='0,13'
								Name='outline1'
								OpacityRelativeMin='0.80'
								PackSize='a,a'
								PalBgTint='line1'
								RStyleDefault='/Styles.space.boxes.boxlinebottomLeft2.rs_default'
								ScrollExtent='522,9'
								Size='522,9'
							/>
						</Page>
						<Page
							BackgroundColor='#FFFFFF'
							GetsInput='false'
							Location='183,388'
							Name='outlineBR'
							OpacityRelativeMin='0.80'
							PackLocation='fff,fff'
							PackSize='p,f'
							RStyleDefault='/Styles.space.boxes.boxlineTopLeft.rs_default'
							ScrollExtent='481,22'
							Size='481,22'
						>
							<Page
								BackgroundColor='#FFFFFF'
								BackgroundOpacity='1.00'
								BackgroundTint='#1CFFFF'
								GetsInput='false'
								Location='0,13'
								Name='outline1'
								OpacityRelativeMin='0.80'
								PackSize='a,a'
								PalBgTint='line1'
								RStyleDefault='/Styles.space.boxes.boxlinebottomRight2.rs_default'
								ScrollExtent='481,9'
								Size='481,9'
							/>
						</Page>
						<Page
							BackgroundColor='#FFFFFF'
							GetsInput='false'
							Location='183,0'
							Name='outlineTR'
							OpacityRelativeMin='0.80'
							PackLocation='fff,nfn'
							PackSize='p,f'
							ScrollExtent='481,22'
							Size='481,22'
						>
							<Page
								BackgroundColor='#FFFFFF'
								BackgroundOpacity='1.00'
								BackgroundTint='#1CFFFF'
								GetsInput='false'
								Name='outline1'
								OpacityRelativeMin='0.80'
								PackSize='a,a'
								PalBgTint='line1'
								RStyleDefault='/Styles.space.boxes.boxlineTopRight2.rs_default'
								ScrollExtent='481,9'
								Size='481,9'
							/>
						</Page>
						<Page
							BackgroundColor='#FFFFFF'
							GetsInput='false'
							Name='outlineTL'
							OpacityRelativeMin='0.80'
							PackLocation='nfn,nfn'
							PackSize='p,f'
							RStyleDefault='/Styles.space.boxes.boxlineTopLeft.rs_default'
							ScrollExtent='522,22'
							Size='522,22'
						>
							<Page
								BackgroundColor='#FFFFFF'
								BackgroundOpacity='1.00'
								BackgroundTint='#1CFFFF'
								GetsInput='false'
								Name='outline1'
								OpacityRelativeMin='0.80'
								PackSize='a,a'
								PalBgTint='line1'
								RStyleDefault='/Styles.space.boxes.boxlineTopLeft2.rs_default'
								ScrollExtent='522,9'
								Size='522,9'
							/>
						</Page>
					</Page>
					<Page
						BackgroundOpacity='1.00'
						Location='-1,0'
						Name='top'
						PackLocation='nfn,nfn'
						PackSize='a,f'
						RStyleDefault='/Styles.New.main_TR.rs_default'
						ScrollExtent='665,29'
						Size='665,29'
					/>
					<Page
						BackgroundOpacity='1.00'
						Location='0,387'
						Name='bottom'
						PackLocation='nfn,fff'
						PackSize='a,f'
						RStyleDefault='/Styles.New.main_BR.rs_default'
						ScrollExtent='664,23'
						Size='664,23'
					/>
				</Page>
				<Page
					BackgroundOpacity='1.00'
					BackgroundTint='#00D6FB'
					GetsInput='false'
					Location='0,5'
					Name='back'
					PackLocation='nfn,nfn'
					PackSize='a,a'
					PalBgTint='back1'
					RStyleDefault='/Styles.New.thin_in.rs_default'
					ScrollExtent='665,402'
					Selectable='true'
					Size='665,402'
				/>
				<Page
					BackgroundOpacity='1.00'
					BackgroundTint='#00D6FB'
					GetsInput='false'
					Name='back'
					PackLocation='nfn,nfn'
					PackSize='a,a'
					PalBgTint='back1'
					RStyleDefault='/Styles.space.spaceglow.rs_default'
					ScrollExtent='665,410'
					Selectable='true'
					Size='665,410'
				/>
			</Page>
		</Page>
