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

#ifndef ALIBABACLOUD_EMR_MODEL_OPERATEEXISTSNODECLUSTERREQUEST_H_
#define ALIBABACLOUD_EMR_MODEL_OPERATEEXISTSNODECLUSTERREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/emr/EmrExport.h>

namespace AlibabaCloud
{
	namespace Emr
	{
		namespace Model
		{
			class ALIBABACLOUD_EMR_EXPORT OperateExistsNodeClusterRequest : public RpcServiceRequest
			{

			public:
				OperateExistsNodeClusterRequest();
				~OperateExistsNodeClusterRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getLogPath()const;
				void setLogPath(const std::string& logPath);
				std::vector<std::string> getMasterInstanceIdList()const;
				void setMasterInstanceIdList(const std::vector<std::string>& masterInstanceIdList);
				bool getIoOptimized()const;
				void setIoOptimized(bool ioOptimized);
				std::string getSecurityGroupId()const;
				void setSecurityGroupId(const std::string& securityGroupId);
				bool getEasEnable()const;
				void setEasEnable(bool easEnable);
				bool getIsResize()const;
				void setIsResize(bool isResize);
				std::string getDepositType()const;
				void setDepositType(const std::string& depositType);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getMachineType()const;
				void setMachineType(const std::string& machineType);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				bool getUseLocalMetaDb()const;
				void setUseLocalMetaDb(bool useLocalMetaDb);
				std::string getEmrVer()const;
				void setEmrVer(const std::string& emrVer);
				int getPeriod()const;
				void setPeriod(int period);
				std::string getClusterId()const;
				void setClusterId(const std::string& clusterId);
				std::string getVSwitchId()const;
				void setVSwitchId(const std::string& vSwitchId);
				std::string getClusterType()const;
				void setClusterType(const std::string& clusterType);
				std::vector<std::string> getOptionSoftWareList()const;
				void setOptionSoftWareList(const std::vector<std::string>& optionSoftWareList);
				std::vector<std::string> getInstanceIdList()const;
				void setInstanceIdList(const std::vector<std::string>& instanceIdList);
				std::string getVpcId()const;
				void setVpcId(const std::string& vpcId);
				std::string getNetType()const;
				void setNetType(const std::string& netType);
				std::string getName()const;
				void setName(const std::string& name);
				std::string getZoneId()const;
				void setZoneId(const std::string& zoneId);
				std::string getChargeType()const;
				void setChargeType(const std::string& chargeType);
				std::string getOperateType()const;
				void setOperateType(const std::string& operateType);
				bool getHighAvailabilityEnable()const;
				void setHighAvailabilityEnable(bool highAvailabilityEnable);

            private:
				long resourceOwnerId_;
				std::string logPath_;
				std::vector<std::string> masterInstanceIdList_;
				bool ioOptimized_;
				std::string securityGroupId_;
				bool easEnable_;
				bool isResize_;
				std::string depositType_;
				std::string accessKeyId_;
				std::string machineType_;
				std::string regionId_;
				bool useLocalMetaDb_;
				std::string emrVer_;
				int period_;
				std::string clusterId_;
				std::string vSwitchId_;
				std::string clusterType_;
				std::vector<std::string> optionSoftWareList_;
				std::vector<std::string> instanceIdList_;
				std::string vpcId_;
				std::string netType_;
				std::string name_;
				std::string zoneId_;
				std::string chargeType_;
				std::string operateType_;
				bool highAvailabilityEnable_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EMR_MODEL_OPERATEEXISTSNODECLUSTERREQUEST_H_