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

#ifndef ALIBABACLOUD_LIVE_MODEL_DESCRIBECASTERSREQUEST_H_
#define ALIBABACLOUD_LIVE_MODEL_DESCRIBECASTERSREQUEST_H_

#include <alibabacloud/live/LiveExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Live {
namespace Model {
class ALIBABACLOUD_LIVE_EXPORT DescribeCastersRequest : public RpcServiceRequest {
public:
	struct Tag {
		std::string key;
		std::string value;
	};
	DescribeCastersRequest();
	~DescribeCastersRequest();
	std::string getStartTime() const;
	void setStartTime(const std::string &startTime);
	int getPageNum() const;
	void setPageNum(int pageNum);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getCasterName() const;
	void setCasterName(const std::string &casterName);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::vector<Tag> getTag() const;
	void setTag(const std::vector<Tag> &tag);
	std::string getNormType() const;
	void setNormType(const std::string &normType);
	std::string getCasterId() const;
	void setCasterId(const std::string &casterId);
	std::string getEndTime() const;
	void setEndTime(const std::string &endTime);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getOrderByModifyAsc() const;
	void setOrderByModifyAsc(const std::string &orderByModifyAsc);
	int getChargeType() const;
	void setChargeType(int chargeType);
	int getStatus() const;
	void setStatus(int status);

private:
	std::string startTime_;
	int pageNum_;
	std::string resourceGroupId_;
	std::string regionId_;
	std::string casterName_;
	int pageSize_;
	std::vector<Tag> tag_;
	std::string normType_;
	std::string casterId_;
	std::string endTime_;
	long ownerId_;
	std::string orderByModifyAsc_;
	int chargeType_;
	int status_;
};
} // namespace Model
} // namespace Live
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_LIVE_MODEL_DESCRIBECASTERSREQUEST_H_
