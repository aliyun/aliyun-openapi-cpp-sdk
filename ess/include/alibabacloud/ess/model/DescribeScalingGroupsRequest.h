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

#ifndef ALIBABACLOUD_ESS_MODEL_DESCRIBESCALINGGROUPSREQUEST_H_
#define ALIBABACLOUD_ESS_MODEL_DESCRIBESCALINGGROUPSREQUEST_H_

#include <alibabacloud/ess/EssExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ess {
namespace Model {
class ALIBABACLOUD_ESS_EXPORT DescribeScalingGroupsRequest : public RpcServiceRequest {
public:
	struct Tag {
		std::string value;
		std::string key;
	};
	DescribeScalingGroupsRequest();
	~DescribeScalingGroupsRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	std::string getGroupType() const;
	void setGroupType(const std::string &groupType);
	std::vector<Tag> getTag() const;
	void setTag(const std::vector<Tag> &tag);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::vector<std::string> getScalingGroupId() const;
	void setScalingGroupId(const std::vector<std::string> &scalingGroupId);
	int getPageNumber() const;
	void setPageNumber(int pageNumber);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getScalingGroupName20() const;
	void setScalingGroupName20(const std::string &scalingGroupName20);
	std::string getScalingGroupName19() const;
	void setScalingGroupName19(const std::string &scalingGroupName19);
	std::string getScalingGroupName18() const;
	void setScalingGroupName18(const std::string &scalingGroupName18);
	std::string getScalingGroupName17() const;
	void setScalingGroupName17(const std::string &scalingGroupName17);
	std::string getScalingGroupName16() const;
	void setScalingGroupName16(const std::string &scalingGroupName16);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getScalingGroupName() const;
	void setScalingGroupName(const std::string &scalingGroupName);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	std::string getScalingGroupName1() const;
	void setScalingGroupName1(const std::string &scalingGroupName1);
	std::string getScalingGroupName2() const;
	void setScalingGroupName2(const std::string &scalingGroupName2);
	std::string getScalingGroupName7() const;
	void setScalingGroupName7(const std::string &scalingGroupName7);
	std::string getScalingGroupName11() const;
	void setScalingGroupName11(const std::string &scalingGroupName11);
	std::string getScalingGroupName8() const;
	void setScalingGroupName8(const std::string &scalingGroupName8);
	std::string getScalingGroupName10() const;
	void setScalingGroupName10(const std::string &scalingGroupName10);
	std::string getScalingGroupName9() const;
	void setScalingGroupName9(const std::string &scalingGroupName9);
	std::string getScalingGroupName3() const;
	void setScalingGroupName3(const std::string &scalingGroupName3);
	std::string getScalingGroupName15() const;
	void setScalingGroupName15(const std::string &scalingGroupName15);
	std::string getScalingGroupName4() const;
	void setScalingGroupName4(const std::string &scalingGroupName4);
	std::string getScalingGroupName14() const;
	void setScalingGroupName14(const std::string &scalingGroupName14);
	std::string getScalingGroupName5() const;
	void setScalingGroupName5(const std::string &scalingGroupName5);
	std::string getScalingGroupName13() const;
	void setScalingGroupName13(const std::string &scalingGroupName13);
	std::string getScalingGroupName6() const;
	void setScalingGroupName6(const std::string &scalingGroupName6);
	std::string getScalingGroupName12() const;
	void setScalingGroupName12(const std::string &scalingGroupName12);

private:
	long resourceOwnerId_;
	std::string resourceGroupId_;
	std::string groupType_;
	std::vector<Tag> tag_;
	long ownerId_;
	std::vector<std::string> scalingGroupId_;
	int pageNumber_;
	std::string accessKeyId_;
	std::string regionId_;
	int pageSize_;
	std::string scalingGroupName20_;
	std::string scalingGroupName19_;
	std::string scalingGroupName18_;
	std::string scalingGroupName17_;
	std::string scalingGroupName16_;
	std::string resourceOwnerAccount_;
	std::string scalingGroupName_;
	std::string ownerAccount_;
	std::string scalingGroupName1_;
	std::string scalingGroupName2_;
	std::string scalingGroupName7_;
	std::string scalingGroupName11_;
	std::string scalingGroupName8_;
	std::string scalingGroupName10_;
	std::string scalingGroupName9_;
	std::string scalingGroupName3_;
	std::string scalingGroupName15_;
	std::string scalingGroupName4_;
	std::string scalingGroupName14_;
	std::string scalingGroupName5_;
	std::string scalingGroupName13_;
	std::string scalingGroupName6_;
	std::string scalingGroupName12_;
};
} // namespace Model
} // namespace Ess
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ESS_MODEL_DESCRIBESCALINGGROUPSREQUEST_H_
