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

#ifndef ALIBABACLOUD_VIAPI_REGEN_MODEL_CUSTOMIZEINSTANCESEGMENTIMAGERESULT_H_
#define ALIBABACLOUD_VIAPI_REGEN_MODEL_CUSTOMIZEINSTANCESEGMENTIMAGERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/viapi-regen/Viapi_regenExport.h>

namespace AlibabaCloud
{
	namespace Viapi_regen
	{
		namespace Model
		{
			class ALIBABACLOUD_VIAPI_REGEN_EXPORT CustomizeInstanceSegmentImageResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct ElementsItem
					{
						struct Boxes
						{
							int x;
							int y;
							int height;
							int width;
						};
						struct Mask
						{
							std::vector<std::string> sizes;
							std::string counts;
						};
						struct ContoursItem
						{
							int x;
							int y;
						};
						float score;
						std::string category;
						std::vector<ElementsItem::ContoursItem> contours;
						Mask mask;
						Boxes boxes;
					};
					std::vector<ElementsItem> elements;
				};


				CustomizeInstanceSegmentImageResult();
				explicit CustomizeInstanceSegmentImageResult(const std::string &payload);
				~CustomizeInstanceSegmentImageResult();
				std::string getMessage()const;
				Data getData()const;
				std::string getCode()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				Data data_;
				std::string code_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VIAPI_REGEN_MODEL_CUSTOMIZEINSTANCESEGMENTIMAGERESULT_H_