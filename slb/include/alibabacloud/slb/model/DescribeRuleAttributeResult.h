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

#ifndef ALIBABACLOUD_SLB_MODEL_DESCRIBERULEATTRIBUTERESULT_H_
#define ALIBABACLOUD_SLB_MODEL_DESCRIBERULEATTRIBUTERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/slb/SlbExport.h>

namespace AlibabaCloud
{
	namespace Slb
	{
		namespace Model
		{
			class ALIBABACLOUD_SLB_EXPORT DescribeRuleAttributeResult : public ServiceResult
			{
			public:


				DescribeRuleAttributeResult();
				explicit DescribeRuleAttributeResult(const std::string &payload);
				~DescribeRuleAttributeResult();
				std::string getCookie()const;
				int getCookieTimeout()const;
				std::string getVServerGroupId()const;
				std::string getListenerPort()const;
				int getHealthCheckInterval()const;
				int getUnhealthyThreshold()const;
				std::string getHealthCheckURI()const;
				std::string getScheduler()const;
				std::string getRuleId()const;
				std::string getHealthCheck()const;
				std::string getLoadBalancerId()const;
				int getHealthCheckTimeout()const;
				std::string getUrl()const;
				std::string getStickySession()const;
				int getHealthCheckConnectPort()const;
				std::string getServiceManagedMode()const;
				int getHealthyThreshold()const;
				std::string getHealthCheckDomain()const;
				std::string getListenerSync()const;
				std::string getStickySessionType()const;
				std::string getDomain()const;
				std::string getHealthCheckHttpCode()const;
				std::string getRuleName()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string cookie_;
				int cookieTimeout_;
				std::string vServerGroupId_;
				std::string listenerPort_;
				int healthCheckInterval_;
				int unhealthyThreshold_;
				std::string healthCheckURI_;
				std::string scheduler_;
				std::string ruleId_;
				std::string healthCheck_;
				std::string loadBalancerId_;
				int healthCheckTimeout_;
				std::string url_;
				std::string stickySession_;
				int healthCheckConnectPort_;
				std::string serviceManagedMode_;
				int healthyThreshold_;
				std::string healthCheckDomain_;
				std::string listenerSync_;
				std::string stickySessionType_;
				std::string domain_;
				std::string healthCheckHttpCode_;
				std::string ruleName_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SLB_MODEL_DESCRIBERULEATTRIBUTERESULT_H_