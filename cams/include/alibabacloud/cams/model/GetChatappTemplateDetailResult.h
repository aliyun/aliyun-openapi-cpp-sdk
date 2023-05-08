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

#ifndef ALIBABACLOUD_CAMS_MODEL_GETCHATAPPTEMPLATEDETAILRESULT_H_
#define ALIBABACLOUD_CAMS_MODEL_GETCHATAPPTEMPLATEDETAILRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/cams/CamsExport.h>

namespace AlibabaCloud
{
	namespace Cams
	{
		namespace Model
		{
			class ALIBABACLOUD_CAMS_EXPORT GetChatappTemplateDetailResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct Component
					{
						struct Button
						{
							struct ExtendAttrs
							{
								std::string action;
								std::string nextLanguageCode;
								std::string nextTemplateCode;
								std::string intentCode;
								std::string nextTemplateName;
							};
							std::string autofillText;
							std::string type;
							bool isOptOut;
							std::string signatureHash;
							std::string packageName;
							std::string phoneNumber;
							std::string text;
							std::string urlType;
							ExtendAttrs extendAttrs;
							std::string url;
						};
						std::string thumbUrl;
						std::string fileName;
						std::string text;
						int duration;
						std::string latitude;
						std::string longitude;
						std::string url;
						std::string caption;
						bool addSecretRecommendation;
						std::string locationName;
						std::string type;
						std::string format;
						int codeExpirationMinutes;
						std::string fileType;
						std::string locationAddress;
						std::vector<Component::Button> buttons;
					};
					std::vector<Component> components;
					std::string templateCode;
					std::string category;
					std::string auditStatus;
					std::string language;
					std::string example;
					std::string templateType;
					std::string name;
				};


				GetChatappTemplateDetailResult();
				explicit GetChatappTemplateDetailResult(const std::string &payload);
				~GetChatappTemplateDetailResult();
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
#endif // !ALIBABACLOUD_CAMS_MODEL_GETCHATAPPTEMPLATEDETAILRESULT_H_