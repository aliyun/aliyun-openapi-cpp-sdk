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

#ifndef ALIBABACLOUD_DYSMSAPI_MODEL_SENDMESSAGEWITHTEMPLATERESULT_H_
#define ALIBABACLOUD_DYSMSAPI_MODEL_SENDMESSAGEWITHTEMPLATERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/dysmsapi/DysmsapiExport.h>

namespace AlibabaCloud
{
	namespace Dysmsapi
	{
		namespace Model
		{
			class ALIBABACLOUD_DYSMSAPI_EXPORT SendMessageWithTemplateResult : public ServiceResult
			{
			public:
				struct NumberDetail
				{
					std::string region;
					std::string country;
					std::string carrier;
				};


				SendMessageWithTemplateResult();
				explicit SendMessageWithTemplateResult(const std::string &payload);
				~SendMessageWithTemplateResult();
				std::string getResponseCode()const;
				NumberDetail getNumberDetail()const;
				std::string getResponseDescription()const;
				std::string getSegments()const;
				std::string getTo()const;
				std::string getMessageId()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string responseCode_;
				NumberDetail numberDetail_;
				std::string responseDescription_;
				std::string segments_;
				std::string to_;
				std::string messageId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DYSMSAPI_MODEL_SENDMESSAGEWITHTEMPLATERESULT_H_