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

#ifndef ALIBABACLOUD_VOD_MODEL_LISTDETECTIONTEMPLATEREQUEST_H_
#define ALIBABACLOUD_VOD_MODEL_LISTDETECTIONTEMPLATEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/vod/VodExport.h>

namespace AlibabaCloud
{
	namespace Vod
	{
		namespace Model
		{
			class ALIBABACLOUD_VOD_EXPORT ListDetectionTemplateRequest : public RpcServiceRequest
			{

			public:
				ListDetectionTemplateRequest();
				~ListDetectionTemplateRequest();

				std::string getPeriod()const;
				void setPeriod(const std::string& period);
				std::string getTemplateName()const;
				void setTemplateName(const std::string& templateName);
				std::string getLetterTemplateId()const;
				void setLetterTemplateId(const std::string& letterTemplateId);

            private:
				std::string period_;
				std::string templateName_;
				std::string letterTemplateId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VOD_MODEL_LISTDETECTIONTEMPLATEREQUEST_H_