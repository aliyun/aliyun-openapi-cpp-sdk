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

#ifndef ALIBABACLOUD_CLOUDAUTH_MODEL_DESCRIBEWHITELISTSETTINGREQUEST_H_
#define ALIBABACLOUD_CLOUDAUTH_MODEL_DESCRIBEWHITELISTSETTINGREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/cloudauth/CloudauthExport.h>

namespace AlibabaCloud
{
	namespace Cloudauth
	{
		namespace Model
		{
			class ALIBABACLOUD_CLOUDAUTH_EXPORT DescribeWhitelistSettingRequest : public RpcServiceRequest
			{

			public:
				DescribeWhitelistSettingRequest();
				~DescribeWhitelistSettingRequest();

				long getValidEndDate()const;
				void setValidEndDate(long validEndDate);
				std::string getCertifyId()const;
				void setCertifyId(const std::string& certifyId);
				std::string getCertNo()const;
				void setCertNo(const std::string& certNo);
				std::string getSourceIp()const;
				void setSourceIp(const std::string& sourceIp);
				int getPageSize()const;
				void setPageSize(int pageSize);
				std::string getLang()const;
				void setLang(const std::string& lang);
				int getCurrentPage()const;
				void setCurrentPage(int currentPage);
				std::string getServiceCode()const;
				void setServiceCode(const std::string& serviceCode);
				long getSceneId()const;
				void setSceneId(long sceneId);
				long getValidStartDate()const;
				void setValidStartDate(long validStartDate);
				std::string getStatus()const;
				void setStatus(const std::string& status);

            private:
				long validEndDate_;
				std::string certifyId_;
				std::string certNo_;
				std::string sourceIp_;
				int pageSize_;
				std::string lang_;
				int currentPage_;
				std::string serviceCode_;
				long sceneId_;
				long validStartDate_;
				std::string status_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CLOUDAUTH_MODEL_DESCRIBEWHITELISTSETTINGREQUEST_H_