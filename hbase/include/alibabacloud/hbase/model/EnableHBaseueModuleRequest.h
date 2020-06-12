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

#ifndef ALIBABACLOUD_HBASE_MODEL_ENABLEHBASEUEMODULEREQUEST_H_
#define ALIBABACLOUD_HBASE_MODEL_ENABLEHBASEUEMODULEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/hbase/HBaseExport.h>

namespace AlibabaCloud
{
	namespace HBase
	{
		namespace Model
		{
			class ALIBABACLOUD_HBASE_EXPORT EnableHBaseueModuleRequest : public RpcServiceRequest
			{

			public:
				EnableHBaseueModuleRequest();
				~EnableHBaseueModuleRequest();

				std::string getClientToken()const;
				void setClientToken(const std::string& clientToken);
				std::string getModuleTypeName()const;
				void setModuleTypeName(const std::string& moduleTypeName);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getHbaseueClusterId()const;
				void setHbaseueClusterId(const std::string& hbaseueClusterId);
				std::string getBdsId()const;
				void setBdsId(const std::string& bdsId);
				std::string getModuleClusterName()const;
				void setModuleClusterName(const std::string& moduleClusterName);
				int getAutoRenewPeriod()const;
				void setAutoRenewPeriod(int autoRenewPeriod);
				int getPeriod()const;
				void setPeriod(int period);
				int getDiskSize()const;
				void setDiskSize(int diskSize);
				std::string getMasterInstanceType()const;
				void setMasterInstanceType(const std::string& masterInstanceType);
				std::string getDiskType()const;
				void setDiskType(const std::string& diskType);
				std::string getVswitchId()const;
				void setVswitchId(const std::string& vswitchId);
				std::string getPeriodUnit()const;
				void setPeriodUnit(const std::string& periodUnit);
				std::string getCoreInstanceType()const;
				void setCoreInstanceType(const std::string& coreInstanceType);
				std::string getVpcId()const;
				void setVpcId(const std::string& vpcId);
				int getNodeCount()const;
				void setNodeCount(int nodeCount);
				std::string getZoneId()const;
				void setZoneId(const std::string& zoneId);
				std::string getPayType()const;
				void setPayType(const std::string& payType);

            private:
				std::string clientToken_;
				std::string moduleTypeName_;
				std::string regionId_;
				std::string hbaseueClusterId_;
				std::string bdsId_;
				std::string moduleClusterName_;
				int autoRenewPeriod_;
				int period_;
				int diskSize_;
				std::string masterInstanceType_;
				std::string diskType_;
				std::string vswitchId_;
				std::string periodUnit_;
				std::string coreInstanceType_;
				std::string vpcId_;
				int nodeCount_;
				std::string zoneId_;
				std::string payType_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_HBASE_MODEL_ENABLEHBASEUEMODULEREQUEST_H_