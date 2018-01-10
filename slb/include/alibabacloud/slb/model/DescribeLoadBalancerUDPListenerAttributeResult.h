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

#ifndef ALIBABACLOUD_SLB_MODEL_DESCRIBELOADBALANCERUDPLISTENERATTRIBUTERESULT_H_
#define ALIBABACLOUD_SLB_MODEL_DESCRIBELOADBALANCERUDPLISTENERATTRIBUTERESULT_H_

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
			class ALIBABACLOUD_SLB_EXPORT DescribeLoadBalancerUDPListenerAttributeResult : public ServiceResult
			{
			public:


				DescribeLoadBalancerUDPListenerAttributeResult();
				explicit DescribeLoadBalancerUDPListenerAttributeResult(const std::string &payload);
				~DescribeLoadBalancerUDPListenerAttributeResult();
				std::string getStatus()const;
				void setStatus(const std::string& status);
				int getMaxConnection()const;
				void setMaxConnection(int maxConnection);
				int getListenerPort()const;
				void setListenerPort(int listenerPort);
				std::string getVServerGroupId()const;
				void setVServerGroupId(const std::string& vServerGroupId);
				int getHealthCheckInterval()const;
				void setHealthCheckInterval(int healthCheckInterval);
				int getUnhealthyThreshold()const;
				void setUnhealthyThreshold(int unhealthyThreshold);
				std::string getScheduler()const;
				void setScheduler(const std::string& scheduler);
				std::string getHealthCheck()const;
				void setHealthCheck(const std::string& healthCheck);
				int getHealthCheckConnectTimeout()const;
				void setHealthCheckConnectTimeout(int healthCheckConnectTimeout);
				int getBackendServerPort()const;
				void setBackendServerPort(int backendServerPort);
				int getPersistenceTimeout()const;
				void setPersistenceTimeout(int persistenceTimeout);
				int getHealthCheckConnectPort()const;
				void setHealthCheckConnectPort(int healthCheckConnectPort);
				std::string getHealthCheckReq()const;
				void setHealthCheckReq(const std::string& healthCheckReq);
				int getBandwidth()const;
				void setBandwidth(int bandwidth);
				int getHealthyThreshold()const;
				void setHealthyThreshold(int healthyThreshold);
				std::string getHealthCheckExp()const;
				void setHealthCheckExp(const std::string& healthCheckExp);
				std::string getMasterSlaveServerGroupId()const;
				void setMasterSlaveServerGroupId(const std::string& masterSlaveServerGroupId);

			protected:
				void parse(const std::string &payload);
			private:
				std::string status_;
				int maxConnection_;
				int listenerPort_;
				std::string vServerGroupId_;
				int healthCheckInterval_;
				int unhealthyThreshold_;
				std::string scheduler_;
				std::string healthCheck_;
				int healthCheckConnectTimeout_;
				int backendServerPort_;
				int persistenceTimeout_;
				int healthCheckConnectPort_;
				std::string healthCheckReq_;
				int bandwidth_;
				int healthyThreshold_;
				std::string healthCheckExp_;
				std::string masterSlaveServerGroupId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SLB_MODEL_DESCRIBELOADBALANCERUDPLISTENERATTRIBUTERESULT_H_