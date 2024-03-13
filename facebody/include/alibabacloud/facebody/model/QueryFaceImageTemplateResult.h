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

#ifndef ALIBABACLOUD_FACEBODY_MODEL_QUERYFACEIMAGETEMPLATERESULT_H_
#define ALIBABACLOUD_FACEBODY_MODEL_QUERYFACEIMAGETEMPLATERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/facebody/FacebodyExport.h>

namespace AlibabaCloud
{
	namespace Facebody
	{
		namespace Model
		{
			class ALIBABACLOUD_FACEBODY_EXPORT QueryFaceImageTemplateResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct ElementsItem
					{
						struct FaceInfosItem
						{
							struct FaceRect
							{
								std::string x;
								std::string y;
								std::string height;
								std::string width;
							};
							FaceRect faceRect;
							std::string templateFaceID;
						};
						std::string templateURL;
						std::string userId;
						std::string createTime;
						std::string updateTime;
						std::vector<ElementsItem::FaceInfosItem> faceInfos;
						std::string templateId;
					};
					long total;
					std::vector<ElementsItem> elements;
				};


				QueryFaceImageTemplateResult();
				explicit QueryFaceImageTemplateResult(const std::string &payload);
				~QueryFaceImageTemplateResult();
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
#endif // !ALIBABACLOUD_FACEBODY_MODEL_QUERYFACEIMAGETEMPLATERESULT_H_