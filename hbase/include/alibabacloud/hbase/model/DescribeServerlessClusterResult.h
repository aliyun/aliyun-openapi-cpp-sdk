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

#ifndef ALIBABACLOUD_HBASE_MODEL_DESCRIBESERVERLESSCLUSTERRESULT_H_
#define ALIBABACLOUD_HBASE_MODEL_DESCRIBESERVERLESSCLUSTERRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/hbase/HBaseExport.h>

namespace AlibabaCloud
{
	namespace HBase
	{
		namespace Model
		{
			class ALIBABACLOUD_HBASE_EXPORT DescribeServerlessClusterResult : public ServiceResult
			{
			public:


				DescribeServerlessClusterResult();
				explicit DescribeServerlessClusterResult(const std::string &payload);
				~DescribeServerlessClusterResult();
				std::string getUpdateStatus()const;
				std::string getResourceGroupId()const;
				std::string getOuterEndpoint()const;
				std::string getAutoRenew()const;
				std::string getReserverMinQpsNum()const;
				std::string getIsDeletionProtection()const;
				std::string getDiskSize()const;
				std::string getReserverMaxQpsNum()const;
				std::string getCuSize()const;
				std::string getStatus()const;
				std::string getInnerEndpoint()const;
				std::string getMainVersion()const;
				std::string getZoneId()const;
				std::string getInstanceId()const;
				std::string getHasUser()const;
				std::string getVSwitchId()const;
				std::string getCreateTime()const;
				std::string getHaType()const;
				std::string getClusterType()const;
				std::string getLockMode()const;
				std::string getPayType()const;
				std::string getInstanceName()const;
				std::string getVpcId()const;
				std::string getRegionId()const;
				std::string getExpireTime()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string updateStatus_;
				std::string resourceGroupId_;
				std::string outerEndpoint_;
				std::string autoRenew_;
				std::string reserverMinQpsNum_;
				std::string isDeletionProtection_;
				std::string diskSize_;
				std::string reserverMaxQpsNum_;
				std::string cuSize_;
				std::string status_;
				std::string innerEndpoint_;
				std::string mainVersion_;
				std::string zoneId_;
				std::string instanceId_;
				std::string hasUser_;
				std::string vSwitchId_;
				std::string createTime_;
				std::string haType_;
				std::string clusterType_;
				std::string lockMode_;
				std::string payType_;
				std::string instanceName_;
				std::string vpcId_;
				std::string regionId_;
				std::string expireTime_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_HBASE_MODEL_DESCRIBESERVERLESSCLUSTERRESULT_H_