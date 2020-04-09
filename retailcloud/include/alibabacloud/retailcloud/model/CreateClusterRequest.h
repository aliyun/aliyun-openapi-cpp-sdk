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

#ifndef ALIBABACLOUD_RETAILCLOUD_MODEL_CREATECLUSTERREQUEST_H_
#define ALIBABACLOUD_RETAILCLOUD_MODEL_CREATECLUSTERREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/retailcloud/RetailcloudExport.h>

namespace AlibabaCloud
{
	namespace Retailcloud
	{
		namespace Model
		{
			class ALIBABACLOUD_RETAILCLOUD_EXPORT CreateClusterRequest : public RpcServiceRequest
			{

			public:
				CreateClusterRequest();
				~CreateClusterRequest();

				std::string getBusinessCode()const;
				void setBusinessCode(const std::string& businessCode);
				bool getCreateWithLogIntegration()const;
				void setCreateWithLogIntegration(bool createWithLogIntegration);
				std::vector<std::string> getVswitchids()const;
				void setVswitchids(const std::vector<std::string>& vswitchids);
				int getCloudMonitorFlags()const;
				void setCloudMonitorFlags(int cloudMonitorFlags);
				std::string getClusterEnvType()const;
				void setClusterEnvType(const std::string& clusterEnvType);
				bool getCreateWithArmsIntegration()const;
				void setCreateWithArmsIntegration(bool createWithArmsIntegration);
				std::string getKeyPair()const;
				void setKeyPair(const std::string& keyPair);
				std::string getClusterTitle()const;
				void setClusterTitle(const std::string& clusterTitle);
				std::string getPodCIDR()const;
				void setPodCIDR(const std::string& podCIDR);
				long getClusterId()const;
				void setClusterId(long clusterId);
				std::string getClusterType()const;
				void setClusterType(const std::string& clusterType);
				std::string getPassword()const;
				void setPassword(const std::string& password);
				int getSnatEntry()const;
				void setSnatEntry(int snatEntry);
				std::string getNetPlug()const;
				void setNetPlug(const std::string& netPlug);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getVpcId()const;
				void setVpcId(const std::string& vpcId);
				std::string getRegionName()const;
				void setRegionName(const std::string& regionName);
				bool getPrivateZone()const;
				void setPrivateZone(bool privateZone);
				std::string getServiceCIDR()const;
				void setServiceCIDR(const std::string& serviceCIDR);
				int getPublicSlb()const;
				void setPublicSlb(int publicSlb);

            private:
				std::string businessCode_;
				bool createWithLogIntegration_;
				std::vector<std::string> vswitchids_;
				int cloudMonitorFlags_;
				std::string clusterEnvType_;
				bool createWithArmsIntegration_;
				std::string keyPair_;
				std::string clusterTitle_;
				std::string podCIDR_;
				long clusterId_;
				std::string clusterType_;
				std::string password_;
				int snatEntry_;
				std::string netPlug_;
				std::string regionId_;
				std::string vpcId_;
				std::string regionName_;
				bool privateZone_;
				std::string serviceCIDR_;
				int publicSlb_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RETAILCLOUD_MODEL_CREATECLUSTERREQUEST_H_