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

#ifndef ALIBABACLOUD_DMS_ENTERPRISE_MODEL_GETPROXYRESULT_H_
#define ALIBABACLOUD_DMS_ENTERPRISE_MODEL_GETPROXYRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/dms-enterprise/Dms_enterpriseExport.h>

namespace AlibabaCloud
{
	namespace Dms_enterprise
	{
		namespace Model
		{
			class ALIBABACLOUD_DMS_ENTERPRISE_EXPORT GetProxyResult : public ServiceResult
			{
			public:


				GetProxyResult();
				explicit GetProxyResult(const std::string &payload);
				~GetProxyResult();
				std::string getPublicHost()const;
				std::string getPrivateHost()const;
				long getInstanceId()const;
				long getProxyId()const;
				long getCreatorId()const;
				bool getSuccess()const;
				bool getPublicEnable()const;
				std::string getProtocolType()const;
				std::string getErrorCode()const;
				int getProtocolPort()const;
				std::string getRegionId()const;
				std::string getErrorMessage()const;
				bool getPrivateEnable()const;
				std::string getCreatorName()const;
				int getHttpsPort()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string publicHost_;
				std::string privateHost_;
				long instanceId_;
				long proxyId_;
				long creatorId_;
				bool success_;
				bool publicEnable_;
				std::string protocolType_;
				std::string errorCode_;
				int protocolPort_;
				std::string regionId_;
				std::string errorMessage_;
				bool privateEnable_;
				std::string creatorName_;
				int httpsPort_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DMS_ENTERPRISE_MODEL_GETPROXYRESULT_H_