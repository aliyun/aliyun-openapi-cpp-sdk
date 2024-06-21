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
							struct SupportedAppsItem
							{
								std::string signatureHash;
								std::string packageName;
							};
							std::string autofillText;
							std::string packageName;
							std::string text;
							ExtendAttrs extendAttrs;
							std::string url;
							std::string flowId;
							std::string type;
							std::string couponCode;
							bool isOptOut;
							std::string flowAction;
							std::string signatureHash;
							std::string navigateScreen;
							std::string phoneNumber;
							std::vector<Button::SupportedAppsItem> supportedApps;
							std::string urlType;
						};
						struct 轮播卡片列表
						{
							struct 卡片控件列表
							{
								struct 卡片按钮列表
								{
									std::string type;
									std::string phoneNumber;
									std::string text;
									std::string urlType;
									std::string url;
								};
								std::string type;
								std::string format;
								std::string text;
								std::string url;
								std::vector<卡片控件列表::卡片按钮列表> buttons1;
							};
							std::vector<轮播卡片列表::卡片控件列表> cardComponents;
						};
						bool hasExpiration;
						std::string thumbUrl;
						std::string fileName;
						std::string text;
						int duration;
						std::string latitude;
						std::string longitude;
						std::string offerExpirationTimeMs;
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
						std::vector<Component::轮播卡片列表> cards;
					};
					std::vector<Component> components;
					std::string templateCode;
					std::string category;
					std::string auditStatus;
					int messageSendTtlSeconds;
					std::string language;
					std::string qualityScore;
					std::string example;
					std::string templateType;
					std::string reason;
					std::string name;
				};


				GetChatappTemplateDetailResult();
				explicit GetChatappTemplateDetailResult(const std::string &payload);
				~GetChatappTemplateDetailResult();
				std::string getAccessDeniedDetail()const;
				std::string getMessage()const;
				Data getData()const;
				std::string getCode()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string accessDeniedDetail_;
				std::string message_;
				Data data_;
				std::string code_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CAMS_MODEL_GETCHATAPPTEMPLATEDETAILRESULT_H_