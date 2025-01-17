		<Page
			Location='293,262'
			MaximumSize='16834,16834'
			MinimumSize='514,266'
			Name='SplitResource'
			PackSize='a,a'
			ScrollExtent='514,266'
			Size='514,266'
			UserMovable='true'
			UserResizable='true'
			Visible='false'
		>
			<Page
				MinimumSize='323,183'
				Name='main'
				PackLocation='cfc,cfc'
				PackSize='p,a'
				RStyleDefault='rs_default'
				ScrollExtent='514,266'
				Size='514,266'
				UserMovable='true'
			>
				<Data
					buttonCancel='buttonCancel'
					buttonclose='bg.mmc.close'
					buttonOk='buttonOk'
					max='input.max'
					Name='CodeData'
					slider='main.input.slider'
					textboxAmount='input.amount.textboxAmount'
					textname='viewerpage.textName'
					viewer='ViewerPage.viewer'
					widgetToFocus='input.amount.textboxAmount'
				/>
				<Page
					BackgroundOpacity='0.90'
					BackgroundTint='#1CFFFF'
					Location='15,30'
					MinimumSize='100,0'
					Name='input'
					PackLocation='nfn,nfn'
					PackSize='h,a'
					PalBgTint='line1'
					RStyleDefault='/Styles.New.whiteOutline_palW.rs_default'
					ScrollExtent='236,203'
					Selectable='true'
					Size='236,203'
				>
					<Text
						BackgroundColor='#FFFFFF'
						ColorCarat='#FFFFFF'
						ColorSelection='#FFFFFF'
						Font='bold_16'
						LocalText='1'
						Location='7,158'
						Margin='2,2,2,2'
						MaxLines='1'
						MinimumSize='0,19'
						Name='min'
						PackLocation='nfn,fff'
						PackSize='f,f'
						PalText='contrast1'
						RStyleDefault='rs_default'
						ScrollExtent='17,21'
						Size='17,19'
						TextColor='#62FF15'
					>1</Text>
					<Text
						BackgroundColor='#FFFFFF'
						ColorCarat='#FFFFFF'
						ColorSelection='#FFFFFF'
						Font='bold_16'
						LocalText='250000'
						Location='50,158'
						Margin='2,2,2,2'
						MaxLines='1'
						MinimumSize='0,19'
						Name='max'
						PackLocation='fff,fff'
						PackSize='a,f'
						PalText='contrast1'
						RStyleDefault='rs_default'
						ScrollExtent='181,21'
						Size='181,19'
						TextAlignment='Right'
						TextColor='#62FF15'
					>250000</Text>
					<Sliderbar
						Location='6,179'
						Name='slider'
						OnDisable='visible=false'
						OnEnable='visible=true'
						PackLocation='nfn,fff'
						PackSize='a,f'
						ScrollExtent='225,15'
						Size='225,15'
						Style='/Styles.New.Slider.default.horizontal.style_test'
						UpperLimit='100'
					>
					</Sliderbar>
					<Page
						BackgroundColor='#FFFFFF'
						BackgroundOpacity='0.80'
						BackgroundTint='#00FFFF'
						Location='36,77'
						Name='amount'
						PackLocation='cpc,cpc'
						PackSize='p,f'
						PalBgTint='line2'
						RStyleDefault='/Styles.New.whiteOutline.rs_default'
						ScrollExtent='166,36'
						Size='166,36'
					>
						<Textbox
							BackgroundOpacity='0.50'
							BackgroundTint='#03546B'
							Location='7,2'
							MinimumSize='0,19'
							Name='textboxAmount'
							NumericInteger='true'
							PackLocation='cfc'
							PackSize='p'
							PalBgTint='back3'
							RStyleDefault='/Styles.New.pill_lrg.rs_default'
							ScrollExtent='152,32'
							Size='152,32'
							Style='/Styles.textbox.default.Style_16'
							TextColor='#FFFF00'
						></Textbox>
					</Page>
					<Text
						BackgroundColor='#FFFFFF'
						ColorCarat='#FFFFFF'
						ColorSelection='#FFFFFF'
						Font='bold_16'
						LocalText='[@ui_res:split_amount]'
						Location='3,11'
						Margin='2,2,2,2'
						MaxLines='1'
						MinimumSize='0,19'
						Name='labelAmount'
						PackSize='a'
						PalText='header'
						RStyleDefault='rs_default'
						ScrollExtent='232,21'
						Size='232,19'
						TextAlignment='Center'
						TextColor='#97FFFF'
					>@ui_res:split_amount</Text>
					<Page
						BackgroundColor='#FFFFFF'
						BackgroundOpacity='0.40'
						BackgroundTint='#00D6FB'
						Location='2,3'
						Name='box'
						PackLocation='nfn,nfn'
						PackSize='a,a'
						PalBgTint='back1'
						RStyleDefault='/Styles.New.whitebox_palW.rs_default'
						ScrollExtent='232,198'
						Size='232,198'
					/>
				</Page>
				<Page
					BackgroundOpacity='0.80'
					BackgroundTint='#00FFFF'
					Location='256,30'
					Name='ViewerPage'
					PackLocation='fff,nfn'
					PackSize='h,a'
					PalBgTint='line2'
					RStyleDefault='/Styles.New.whiteOutline_palW.rs_default'
					ScrollExtent='250,203'
					Size='250,203'
				>
					<Text
						BackgroundColor='#FFFFFF'
						ColorCarat='#FFFFFF'
						ColorSelection='#FFFFFF'
						Font='bold_16'
						LocalText='xxx resource name here'
						Location='4,170'
						Margin='2,2,2,2'
						MaxLines='1'
						MinimumSize='0,19'
						Name='textName'
						PackLocation='nfn,fff'
						PackSize='a,p'
						PalText='contrast1'
						RStyleDefault='rs_default'
						ScrollExtent='241,27'
						Size='241,27'
						TextAlignment='Center'
						TextAlignmentVertical='Bottom'
						TextColor='#62FF15'
					>xxx resource name here</Text>
					<CuiWidget3dObjectListViewer
						BackgroundColor='#FFFFFF'
						BackgroundOpacity='0.60'
						BackgroundTint='#00D6FB'
						defaultrotatespeed='0'
						Dragable='true'
						DragAccepts='gameobject'
						headshot='true'
						lightambientcolor='#aaaaaa'
						Location='4,3'
						mousedraggable='true'
						Name='Viewer'
						PackLocation='fff,nfn'
						PackSize='a,a'
						PalBgTint='back1'
						RStyleDefault='/Styles.New.viewer.rs_default'
						ScrollExtent='242,198'
						Size='242,198'
					/>
					<Page
						BackgroundColor='#FFFFFF'
						BackgroundOpacity='0.70'
						BackgroundTint='#00D6FB'
						Location='14,12'
						Name='box'
						PackLocation='nfn,nfn'
						PackSize='a,a'
						PalBgTint='back1'
						RStyleDefault='/Styles.New.pill_lrg.rs_default'
						ScrollExtent='224,166'
						Size='224,166'
					/>
				</Page>
				<Button
					DragType='uicommand'
					IsCancelButton='true'
					IsDefaultButton='true'
					LocalText='[@cancel]'
					Location='325,234'
					MinimumSize='0,26'
					Name='buttonCancel'
					PackLocation='fff,fff'
					PackSize='p,f'
					ScrollExtent='173,26'
					Size='173,26'
					Style='/Styles.New.buttons.hud.style'
					TextColor='#000000'
				>@cancel</Button>
				<Button
					DragType='uicommand'
					LocalText='[@ok]'
					Location='16,227'
					MinimumSize='0,26'
					Name='buttonOk'
					PackLocation='nfn,fff'
					PackSize='p,f'
					ScrollExtent='173,26'
					Size='173,26'
					Style='/Styles.New.buttons.hud.style'
					TextColor='#000000'
				>@ok</Button>
				<Page
					Name='bg'
					PackLocation='nfn,nfn'
					PackSize='a,a'
					ScrollExtent='514,266'
					Size='514,266'
				>
					<Page
						Location='503,8'
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
						ScrollExtent='377,19'
						Size='377,19'
					>
						<Text
							Enabled='false'
							Font='bold_13'
							LocalText='[@UI_RES:CPT_SPLIT]'
							Margin='6,-2,0,0'
							MaxLines='1'
							MinimumSize='0,19'
							Name='text'
							PackSize='a,f'
							PalText='titletext'
							ScrollExtent='377,19'
							Size='377,19'
							TextAlignmentVertical='Center'
							TextCapital='true'
							TextColor='#00354F'
						>@ui_res:cpt_split</Text>
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
						ScrollExtent='513,266'
						Selectable='true'
						Size='513,266'
					>
						<Page
							BackgroundColor='#FFFFFF'
							GetsInput='false'
							Location='1,0'
							Name='lines'
							PackSize='a,a'
							RStyleDefault='/Styles.space.boxes.generic4.rs_default'
							ScrollExtent='513,266'
							Size='513,266'
						>
							<Page
								BackgroundColor='#FFFFFF'
								GetsInput='false'
								Location='0,244'
								Name='outlineBL'
								OpacityRelativeMin='0.80'
								PackLocation='nfn,fff'
								PackSize='p,f'
								ScrollExtent='401,22'
								Size='401,22'
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
									ScrollExtent='401,9'
									Size='401,9'
								/>
							</Page>
							<Page
								BackgroundColor='#FFFFFF'
								GetsInput='false'
								Location='144,244'
								Name='outlineBR'
								OpacityRelativeMin='0.80'
								PackLocation='fff,fff'
								PackSize='p,f'
								RStyleDefault='/Styles.space.boxes.boxlineTopLeft.rs_default'
								ScrollExtent='369,22'
								Size='369,22'
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
									ScrollExtent='369,9'
									Size='369,9'
								/>
							</Page>
							<Page
								BackgroundColor='#FFFFFF'
								GetsInput='false'
								Location='144,0'
								Name='outlineTR'
								OpacityRelativeMin='0.80'
								PackLocation='fff,nfn'
								PackSize='p,f'
								ScrollExtent='369,22'
								Size='369,22'
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
									ScrollExtent='369,9'
									Size='369,9'
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
								ScrollExtent='401,22'
								Size='401,22'
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
									ScrollExtent='401,9'
									Size='401,9'
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
							ScrollExtent='514,29'
							Size='514,29'
						/>
						<Page
							BackgroundOpacity='1.00'
							Location='0,243'
							Name='bottom'
							PackLocation='nfn,fff'
							PackSize='a,f'
							RStyleDefault='/Styles.New.main_BR.rs_default'
							ScrollExtent='513,23'
							Size='513,23'
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
						ScrollExtent='514,258'
						Selectable='true'
						Size='514,258'
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
						ScrollExtent='514,266'
						Selectable='true'
						Size='514,266'
					/>
				</Page>
			</Page>
		</Page>
