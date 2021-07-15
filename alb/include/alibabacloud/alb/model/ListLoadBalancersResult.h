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

#ifndef ALIBABACLOUD_ALB_MODEL_LISTLOADBALANCERSRESULT_H_
#define ALIBABACLOUD_ALB_MODEL_LISTLOADBALANCERSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/alb/AlbExport.h>

namespace AlibabaCloud
{
	namespace Alb
	{
		namespace Model
		{
			class ALIBABACLOUD_ALB_EXPORT ListLoadBalancersResult : public ServiceResult
			{
			public:
				struct LoadBalancer
				{
					struct AccessLogConfig
					{
						std::string logStore;
						std::string logProject;
					};
					struct DeletionProtectionConfig
					{
						bool enabled;
						std::string enabledTime;
					};
					struct LoadBalancerBillingConfig
					{
						int internetBandwidth;
						std::string payType;
						std::string internetChargeType;
					};
					struct ModificationProtectionConfig
					{
						std::string status;
						std::string reason;
					};
					struct LoadBalancerOperationLock
					{
						std::string lockReason;
						std::string lockType;
					};
					struct Tag
					{
						std::string value;
						std::string key;
					};
					bool serviceManagedEnabled;
					std::string loadBalancerEdition;
					std::string resourceGroupId;
					LoadBalancerBillingConfig loadBalancerBillingConfig;
					std::string createTime;
					std::string loadBalancerId;
					std::string dNSName;
					ModificationProtectionConfig modificationProtectionConfig;
					std::string loadBalancerName;
					AccessLogConfig accessLogConfig;
					int bandwidthCapacity;
					DeletionProtectionConfig deletionProtectionConfig;
					std::string loadBalancerBussinessStatus;
					std::string vpcId;
					std::string serviceManagedMode;
					std::string bandwidthPackageId;
					std::string addressAllocatedMode;
					std::string addressType;
					std::string loadBalancerStatus;
					std::vector<LoadBalancer::Tag> tags;
					std::vector<LoadBalancer::LoadBalancerOperationLock> loadBalancerOperationLocks;
				};


				ListLoadBalancersResult();
				explicit ListLoadBalancersResult(const std::string &payload);
				~ListLoadBalancersResult();
				int getTotalCount()const;
				std::string getNextToken()const;
				int getMaxResults()const;
				std::vector<LoadBalancer> getLoadBalancers()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				std::string nextToken_;
				int maxResults_;
				std::vector<LoadBalancer> loadBalancers_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ALB_MODEL_LISTLOADBALANCERSRESULT_H_