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

#ifndef ALIBABACLOUD_ENS_MODEL_DESCRIBELOADBALANCERTCPLISTENERATTRIBUTERESULT_H_
#define ALIBABACLOUD_ENS_MODEL_DESCRIBELOADBALANCERTCPLISTENERATTRIBUTERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ens/EnsExport.h>

namespace AlibabaCloud
{
	namespace Ens
	{
		namespace Model
		{
			class ALIBABACLOUD_ENS_EXPORT DescribeLoadBalancerTCPListenerAttributeResult : public ServiceResult
			{
			public:


				DescribeLoadBalancerTCPListenerAttributeResult();
				explicit DescribeLoadBalancerTCPListenerAttributeResult(const std::string &payload);
				~DescribeLoadBalancerTCPListenerAttributeResult();
				std::string getStatus()const;
				int getListenerPort()const;
				int getHealthCheckInterval()const;
				std::string getDescription()const;
				int getUnhealthyThreshold()const;
				std::string getScheduler()const;
				std::string getHealthCheckURI()const;
				std::string getHealthCheck()const;
				int getHealthCheckConnectTimeout()const;
				int getBackendServerPort()const;
				int getPersistenceTimeout()const;
				int getHealthCheckConnectPort()const;
				int getBandwidth()const;
				int getHealthyThreshold()const;
				std::string getHealthCheckDomain()const;
				std::string getEipTransmit()const;
				std::string getHealthCheckHttpCode()const;
				std::string getHealthCheckType()const;
				int getEstablishedTimeout()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string status_;
				int listenerPort_;
				int healthCheckInterval_;
				std::string description_;
				int unhealthyThreshold_;
				std::string scheduler_;
				std::string healthCheckURI_;
				std::string healthCheck_;
				int healthCheckConnectTimeout_;
				int backendServerPort_;
				int persistenceTimeout_;
				int healthCheckConnectPort_;
				int bandwidth_;
				int healthyThreshold_;
				std::string healthCheckDomain_;
				std::string eipTransmit_;
				std::string healthCheckHttpCode_;
				std::string healthCheckType_;
				int establishedTimeout_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ENS_MODEL_DESCRIBELOADBALANCERTCPLISTENERATTRIBUTERESULT_H_