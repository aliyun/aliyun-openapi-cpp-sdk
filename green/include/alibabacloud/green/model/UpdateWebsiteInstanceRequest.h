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

#ifndef ALIBABACLOUD_GREEN_MODEL_UPDATEWEBSITEINSTANCEREQUEST_H_
#define ALIBABACLOUD_GREEN_MODEL_UPDATEWEBSITEINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/green/GreenExport.h>

namespace AlibabaCloud
{
	namespace Green
	{
		namespace Model
		{
			class ALIBABACLOUD_GREEN_EXPORT UpdateWebsiteInstanceRequest : public RpcServiceRequest
			{

			public:
				UpdateWebsiteInstanceRequest();
				~UpdateWebsiteInstanceRequest();

				std::string getIndexPage()const;
				void setIndexPage(const std::string& indexPage);
				std::string getSourceIp()const;
				void setSourceIp(const std::string& sourceIp);
				std::string getLang()const;
				void setLang(const std::string& lang);
				int getWebsiteScanInterval()const;
				void setWebsiteScanInterval(int websiteScanInterval);
				std::string getSiteProtocol()const;
				void setSiteProtocol(const std::string& siteProtocol);
				std::string getInstanceId()const;
				void setInstanceId(const std::string& instanceId);
				std::string getDomain()const;
				void setDomain(const std::string& domain);
				int getIndexPageScanInterval()const;
				void setIndexPageScanInterval(int indexPageScanInterval);

            private:
				std::string indexPage_;
				std::string sourceIp_;
				std::string lang_;
				int websiteScanInterval_;
				std::string siteProtocol_;
				std::string instanceId_;
				std::string domain_;
				int indexPageScanInterval_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_GREEN_MODEL_UPDATEWEBSITEINSTANCEREQUEST_H_