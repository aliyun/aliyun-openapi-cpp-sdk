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

#ifndef ALIBABACLOUD_ARMS_MODEL_DESCRIBECONTACTGROUPSREQUEST_H_
#define ALIBABACLOUD_ARMS_MODEL_DESCRIBECONTACTGROUPSREQUEST_H_

#include <alibabacloud/arms/ARMSExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace ARMS {
namespace Model {
class ALIBABACLOUD_ARMS_EXPORT DescribeContactGroupsRequest : public RpcServiceRequest {
public:
	DescribeContactGroupsRequest();
	~DescribeContactGroupsRequest();
	bool getIsDetail() const;
	void setIsDetail(bool isDetail);
	std::string getContactGroupName() const;
	void setContactGroupName(const std::string &contactGroupName);
	std::string getVerbose() const;
	void setVerbose(const std::string &verbose);
	long getSize() const;
	void setSize(long size);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getGroupIds() const;
	void setGroupIds(const std::string &groupIds);
	long getPage() const;
	void setPage(long page);

private:
	bool isDetail_;
	std::string contactGroupName_;
	std::string verbose_;
	long size_;
	std::string regionId_;
	std::string groupIds_;
	long page_;
};
} // namespace Model
} // namespace ARMS
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ARMS_MODEL_DESCRIBECONTACTGROUPSREQUEST_H_
