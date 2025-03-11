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

#ifndef ALIBABACLOUD_DRDS_MODEL_DESCRIBEDRDSINSTANCESREQUEST_H_
#define ALIBABACLOUD_DRDS_MODEL_DESCRIBEDRDSINSTANCESREQUEST_H_

#include <alibabacloud/drds/DrdsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Drds {
namespace Model {
class ALIBABACLOUD_DRDS_EXPORT DescribeDrdsInstancesRequest : public RpcServiceRequest {
public:
	struct Tag {
		std::string value;
		std::string key;
	};
	DescribeDrdsInstancesRequest();
	~DescribeDrdsInstancesRequest();
	std::string getDescription() const;
	void setDescription(const std::string &description);
	std::string getProductVersion() const;
	void setProductVersion(const std::string &productVersion);
	std::string getType() const;
	void setType(const std::string &type);
	int getPageNumber() const;
	void setPageNumber(int pageNumber);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	bool getExpired() const;
	void setExpired(bool expired);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::vector<Tag> getTag() const;
	void setTag(const std::vector<Tag> &tag);
	bool getMix() const;
	void setMix(bool mix);

private:
	std::string description_;
	std::string productVersion_;
	std::string type_;
	int pageNumber_;
	std::string accessKeyId_;
	std::string resourceGroupId_;
	bool expired_;
	std::string regionId_;
	int pageSize_;
	std::vector<Tag> tag_;
	bool mix_;
};
} // namespace Model
} // namespace Drds
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DRDS_MODEL_DESCRIBEDRDSINSTANCESREQUEST_H_
