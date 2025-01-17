	<Page
		BackgroundOpacity='1.00'
		Name='credits'
		PackSize='1,1'
		ScrollExtent='1570,980'
		Size='1570,980'
		Visible='false'
	>
		<Image
			AbsorbsInput='false'
			BackgroundOpacity='1.00'
			Location='606,8'
			MinimumSize='358,358'
			Name='swg'
			PackLocation='cfc'
			PackSize='f,f'
			ScrollExtent='358,358'
			Size='358,358'
			SourceRect='0,0,512,512'
			SourceResource='ui_starwars_logo'
			Style='splash'
		/>
		<Page
			AbsorbsInput='false'
			BackgroundOpacity='1.00'
			MinimumSize='0,390'
			Name='blocker'
			PackSize='a'
			ScrollExtent='1570,390'
			Size='1570,390'
		/>
		<Data
			comp='comp'
			Name='CodeData'
			sampleCompany='comp.company'
			sampleHeader='comp.header'
			sampleMain='comp.main'
			sampleNames='comp.names'
			sampleSpacer='comp.spacer'
			sampleText='comp.text'
			sampleTitle='comp.title'
		/>
		<Composite
			Name='comp'
			PackSize='a,a'
			ScrollExtent='1570,980'
			Size='1570,980'
			Spacing='4'
			SpacingType='Constant'
			UserDragScrollable='true'
		>
			<Page
				MinimumSize='0,390'
				Name='dummystrut'
				ScrollExtent='320,390'
				Size='320,390'
			/>
			<Text
				Font='bold_24'
				LocalText='STAR WARS GALAXIES: AN EMPIRE DIVIDED'
				Location='519,394'
				Margin='4,4,4,4'
				Name='main'
				PackLocation='cfc'
				ScrollExtent='532,33'
				Size='532,33'
				TextAlignment='Center'
				TextColor='#F9C62B'
			>STAR WARS GALAXIES: AN EMPIRE DIVIDED</Text>
			<Text
				Font='bold_24'
				LocalText='xxx Company Name Here'
				Location='519,431'
				Margin='4,32,4,4'
				Name='company'
				PackLocation='cfc'
				ScrollExtent='532,61'
				Size='532,61'
				TextAlignment='Center'
			>xxx Company Name Here</Text>
			<Text
				BackgroundOpacity='1.00'
				Font='bold_24'
				LocalText='xxx Header'
				Location='519,496'
				Margin='4,16,4,2'
				Name='header'
				PackLocation='cfc'
				RStyleDefault='/Styles.New.text_blank.hover.rs'
				ScrollExtent='532,43'
				Size='532,43'
				TextAlignment='Center'
				TextColor='#FFDB11'
			>xxx Header</Text>
			<Text
				Font='normal_22'
				LocalText='xxx Title Here'
				Location='519,543'
				Margin='4,16,4,4'
				Name='title'
				PackLocation='cfc'
				ScrollExtent='532,43'
				Size='532,43'
				TextAlignment='Center'
				TextColor='#FFDB11'
			>xxx Title Here</Text>
			<Text
				Font='bold_24'
				LocalText='XXX HEADER'
				Location='519,590'
				Margin='2,2,2,2'
				MinimumSize='0,27'
				Name='names'
				PackLocation='cfc'
				ScrollExtent='532,29'
				Size='532,29'
				TextAlignment='Center'
				TextCapital='true'
			>xxx Header</Text>
			<Page
				Location='519,623'
				MaximumSize='16384,16'
				MinimumSize='0,8'
				Name='spacer'
				PackLocation='cfc'
				ScrollExtent='532,16'
				Size='532,16'
			/>
			<Text
				Font='default_20'
				LocalText='xxx Header'
				Location='519,643'
				Margin='2,2,2,2'
				MinimumSize='0,24'
				Name='text'
				PackLocation='cfc'
				ScrollExtent='532,25'
				Size='532,25'
				TextAlignment='Center'
			>xxx Header</Text>
			<Page
				Location='0,672'
				MinimumSize='0,300'
				Name='dummystrut'
				ScrollExtent='320,300'
				Size='320,300'
			/>
		</Composite>
		<Page
			AbsorbsInput='false'
			Activated='true'
			BackgroundColor='#259C3A'
			Location='0,930'
			MaximumSize='16384,50'
			Name='pbb'
			PackLocation='cfc,fff'
			PackSize='a,f'
			ScrollExtent='1570,50'
			Size='1570,50'
		>
			<Page
				AbsorbsInput='false'
				Activated='true'
				BackgroundColor='#259C3A'
				BackgroundOpacity='1.00'
				Location='-1,0'
				MaximumSize='158,50'
				MinimumSize='158,50'
				Name='Prev'
				Opacity='0.00'
				PackLocation='nfn,fff'
				PackSize='p,a'
				RStyleDefault='/Styles.New.PrevFrame.rs_default'
				ScrollExtent='158,50'
				Size='158,50'
			>
				<Text
					Font='bold_13'
					LocalText='[@BACK]'
					Location='21,11'
					Margin='0,0,0,2'
					Name='back'
					PackLocation='nfn,fff'
					PackSize='f,a'
					PalText='highlight'
					ScrollExtent='125,16'
					Size='125,16'
					TextAlignment='Center'
					TextAlignmentVertical='Center'
					TextCapital='true'
					TextColor='#00FFFF'
				>@back</Text>
				<Runner
					GetsInput='false'
					Location='21,11'
					MaximumSize='179,20'
					Name='runner'
					Opacity='0.20'
					PackLocation='nfn,fff'
					PackSize='f,a'
					Rotation='0.50'
					RunDelayAdvance='300'
					RunDelayRestart='0'
					RunEffectorsOff='/effectors.opacity.slow.fadeout'
					RunEffectorsOn='/effectors.opacity.fast.fadefull'
					RunPaused='false'
					RunSimultaneous='2'
					ScrollExtent='125,16'
					Size='125,16'
				>
					<Page
						BackgroundColor='#00FFFF'
						BackgroundOpacity='1.00'
						Color='#00FFFF'
						Location='6,2'
						Name='p'
						Opacity='0.00'
						PalBgColor='highlight'
						PalColor='highlight'
						RStyleDefault='/Styles.mfd.statusbars.arrows_right.rs_default'
						ScrollExtent='14,12'
						Size='14,12'
					/>
					<Page
						BackgroundColor='#00FFFF'
						BackgroundOpacity='1.00'
						Color='#00FFFF'
						Location='23,2'
						Name='p'
						Opacity='0.00'
						PalBgColor='highlight'
						PalColor='highlight'
						RStyleDefault='/Styles.mfd.statusbars.arrows_right.rs_default'
						ScrollExtent='14,12'
						Size='14,12'
					/>
					<Page
						BackgroundColor='#00FFFF'
						BackgroundOpacity='1.00'
						Color='#00FFFF'
						Location='40,2'
						Name='p'
						Opacity='0.00'
						PalBgColor='highlight'
						PalColor='highlight'
						RStyleDefault='/Styles.mfd.statusbars.arrows_right.rs_default'
						ScrollExtent='14,12'
						Size='14,12'
					/>
					<Page
						BackgroundColor='#00FFFF'
						BackgroundOpacity='1.00'
						Color='#00FFFF'
						Location='57,2'
						Name='p'
						Opacity='0.00'
						PalBgColor='highlight'
						PalColor='highlight'
						RStyleDefault='/Styles.mfd.statusbars.arrows_right.rs_default'
						ScrollExtent='14,12'
						Size='14,12'
					/>
					<Page
						BackgroundColor='#00FFFF'
						BackgroundOpacity='1.00'
						Color='#00FFFF'
						Location='74,2'
						Name='p'
						PalBgColor='highlight'
						PalColor='highlight'
						RStyleDefault='/Styles.mfd.statusbars.arrows_right.rs_default'
						ScrollExtent='14,12'
						Size='14,12'
					/>
					<Page
						BackgroundColor='#00FFFF'
						BackgroundOpacity='1.00'
						Color='#00FFFF'
						Location='91,2'
						Name='p'
						PalColor='highlight'
						RStyleDefault='/Styles.mfd.statusbars.arrows_right.rs_default'
						ScrollExtent='14,12'
						Size='14,12'
					/>
				</Runner>
				<Button
					IsCancelButton='true'
					Location='21,11'
					Name='button'
					PackLocation='nfn,nfn'
					PackSize='a,f'
					ScrollExtent='125,16'
					Selectable='true'
					Size='125,16'
					Style='/Styles.buttons.button_prev.style'
				></Button>
			</Page>
		</Page>
	</Page>
