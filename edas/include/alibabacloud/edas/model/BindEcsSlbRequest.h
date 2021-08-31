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

#ifndef ALIBABACLOUD_EDAS_MODEL_BINDECSSLBREQUEST_H_
#define ALIBABACLOUD_EDAS_MODEL_BINDECSSLBREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RoaServiceRequest.h>
#include <alibabacloud/edas/EdasExport.h>

namespace AlibabaCloud
{
	namespace Edas
	{
		namespace Model
		{
			class ALIBABACLOUD_EDAS_EXPORT BindEcsSlbRequest : public RoaServiceRequest
			{

			public:
				BindEcsSlbRequest();
				~BindEcsSlbRequest();

				std::string getVServerGroupId()const;
				void setVServerGroupId(const std::string& vServerGroupId);
				int getListenerPort()const;
				void setListenerPort(int listenerPort);
				std::string getVForwardingUrlRule()const;
				void setVForwardingUrlRule(const std::string& vForwardingUrlRule);
				std::string getSlbId()const;
				void setSlbId(const std::string& slbId);
				std::string getDeployGroupId()const;
				void setDeployGroupId(const std::string& deployGroupId);
				std::string getListenerHealthCheckUrl()const;
				void setListenerHealthCheckUrl(const std::string& listenerHealthCheckUrl);
				std::string getAppId()const;
				void setAppId(const std::string& appId);
				std::string getListenerProtocol()const;
				void setListenerProtocol(const std::string& listenerProtocol);
				std::string getVServerGroupName()const;
				void setVServerGroupName(const std::string& vServerGroupName);

            private:
				std::string vServerGroupId_;
				int listenerPort_;
				std::string vForwardingUrlRule_;
				std::string slbId_;
				std::string deployGroupId_;
				std::string listenerHealthCheckUrl_;
				std::string appId_;
				std::string listenerProtocol_;
				std::string vServerGroupName_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EDAS_MODEL_BINDECSSLBREQUEST_H_