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

#ifndef ALIBABACLOUD_VPC_MODEL_DESCRIBEVPCATTRIBUTERESULT_H_
#define ALIBABACLOUD_VPC_MODEL_DESCRIBEVPCATTRIBUTERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/vpc/VpcExport.h>

namespace AlibabaCloud
{
	namespace Vpc
	{
		namespace Model
		{
			class ALIBABACLOUD_VPC_EXPORT DescribeVpcAttributeResult : public ServiceResult
			{
			public:
				struct AssociatedCbn
				{
					std::string cbnId;
					long cbnOwnerUid;
					std::string cbnStatus;
				};
				struct CloudResourceSetType
				{
					int resourceCount;
					std::string resourceType;
				};


				DescribeVpcAttributeResult();
				explicit DescribeVpcAttributeResult(const std::string &payload);
				~DescribeVpcAttributeResult();
				std::string getStatus()const;
				void setStatus(const std::string& status);
				bool getIsDefault()const;
				void setIsDefault(bool isDefault);
				std::string getDescription()const;
				void setDescription(const std::string& description);
				bool getClassicLinkEnabled()const;
				void setClassicLinkEnabled(bool classicLinkEnabled);
				std::vector<std::string> getVSwitchIds()const;
				void setVSwitchIds(const std::vector<std::string>& vSwitchIds);
				std::string getCidrBlock()const;
				void setCidrBlock(const std::string& cidrBlock);
				std::vector<std::string> getUserCidrs()const;
				void setUserCidrs(const std::vector<std::string>& userCidrs);
				std::vector<AssociatedCbn> getAssociatedCbns()const;
				void setAssociatedCbns(const std::vector<AssociatedCbn>& associatedCbns);
				std::string getVRouterId()const;
				void setVRouterId(const std::string& vRouterId);
				std::string getVpcId()const;
				void setVpcId(const std::string& vpcId);
				std::string getCreationTime()const;
				void setCreationTime(const std::string& creationTime);
				std::string getVpcName()const;
				void setVpcName(const std::string& vpcName);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::vector<CloudResourceSetType> getCloudResources()const;
				void setCloudResources(const std::vector<CloudResourceSetType>& cloudResources);

			protected:
				void parse(const std::string &payload);
			private:
				std::string status_;
				bool isDefault_;
				std::string description_;
				bool classicLinkEnabled_;
				std::vector<std::string> vSwitchIds_;
				std::string cidrBlock_;
				std::vector<std::string> userCidrs_;
				std::vector<AssociatedCbn> associatedCbns_;
				std::string vRouterId_;
				std::string vpcId_;
				std::string creationTime_;
				std::string vpcName_;
				std::string regionId_;
				std::vector<CloudResourceSetType> cloudResources_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VPC_MODEL_DESCRIBEVPCATTRIBUTERESULT_H_