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

#ifndef ALIBABACLOUD_CMS_MODEL_PROFILESETREQUEST_H_
#define ALIBABACLOUD_CMS_MODEL_PROFILESETREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/cms/CmsRequest.h>

namespace AlibabaCloud
{
	namespace Cms
	{
		namespace Model
		{
			class ALIBABACLOUD_CMS_EXPORT ProfileSetRequest : public CmsRequest
			{

			public:
				ProfileSetRequest();
				~ProfileSetRequest();

				bool getEnableInstallAgentNewECS()const;
				void setEnableInstallAgentNewECS(bool enableInstallAgentNewECS);
				std::string getEnableActiveAlert()const;
				void setEnableActiveAlert(const std::string& enableActiveAlert);
				bool getAutoInstall()const;
				void setAutoInstall(bool autoInstall);
				long getUserId()const;
				void setUserId(long userId);

            private:
				bool enableInstallAgentNewECS_;
				std::string enableActiveAlert_;
				bool autoInstall_;
				long userId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CMS_MODEL_PROFILESETREQUEST_H_