/*
 * Copyright 2009-2017 Alibaba Cloud All rights reserved.
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *      http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef ALIBABACLOUD_LIVE_MODEL_DESCRIBECASTERCOMPONENTSRESULT_H_
#define ALIBABACLOUD_LIVE_MODEL_DESCRIBECASTERCOMPONENTSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/live/LiveExport.h>

namespace AlibabaCloud
{
	namespace Live
	{
		namespace Model
		{
			class ALIBABACLOUD_LIVE_EXPORT DescribeCasterComponentsResult : public ServiceResult
			{
			public:
				struct Component
				{
					struct CaptionLayerContent
					{
						float borderWidthNormalized;
						std::string color;
						std::string borderColor;
						std::string locationId;
						bool showSourceLan;
						std::string sourceLan;
						int wordCountPerLine;
						int ptsOffset;
						float sizeNormalized;
						std::string fontName;
						float wordSpaceNormalized;
						std::string targetLan;
						int wordsCount;
						float lineSpaceNormalized;
					};
					struct ComponentLayer
					{
						std::vector<std::string> positionNormalizeds;
						int transparency;
						float heightNormalized;
						std::string positionRefer;
						float widthNormalized;
					};
					struct ImageLayerContent
					{
						std::string materialId;
					};
					struct TextLayerContent
					{
						float borderWidthNormalized;
						float sizeNormalized;
						std::string color;
						std::string borderColor;
						std::string fontName;
						std::string text;
					};
					CaptionLayerContent captionLayerContent;
					TextLayerContent textLayerContent;
					std::string componentType;
					ComponentLayer componentLayer;
					std::string locationId;
					std::string componentName;
					std::string effect;
					std::string componentId;
					ImageLayerContent imageLayerContent;
				};


				DescribeCasterComponentsResult();
				explicit DescribeCasterComponentsResult(const std::string &payload);
				~DescribeCasterComponentsResult();
				std::vector<Component> getComponents()const;
				int getTotal()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<Component> components_;
				int total_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_LIVE_MODEL_DESCRIBECASTERCOMPONENTSRESULT_H_