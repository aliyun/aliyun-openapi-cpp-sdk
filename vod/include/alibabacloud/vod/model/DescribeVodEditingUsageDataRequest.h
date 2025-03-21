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

#ifndef ALIBABACLOUD_VOD_MODEL_DESCRIBEVODEDITINGUSAGEDATAREQUEST_H_
#define ALIBABACLOUD_VOD_MODEL_DESCRIBEVODEDITINGUSAGEDATAREQUEST_H_

#include <alibabacloud/vod/VodExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Vod {
namespace Model {
class ALIBABACLOUD_VOD_EXPORT DescribeVodEditingUsageDataRequest : public RpcServiceRequest {
public:
	DescribeVodEditingUsageDataRequest();
	~DescribeVodEditingUsageDataRequest();
	std::string getStartTime() const;
	void setStartTime(const std::string &startTime);
	std::string getSplitBy() const;
	void setSplitBy(const std::string &splitBy);
	std::string getProduct() const;
	void setProduct(const std::string &product);
	std::string getEndTime() const;
	void setEndTime(const std::string &endTime);
	std::string getSpecification() const;
	void setSpecification(const std::string &specification);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getAppId() const;
	void setAppId(const std::string &appId);
	std::string getRegion() const;
	void setRegion(const std::string &region);

private:
	std::string startTime_;
	std::string splitBy_;
	std::string product_;
	std::string endTime_;
	std::string specification_;
	long ownerId_;
	std::string appId_;
	std::string region_;
};
} // namespace Model
} // namespace Vod
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_VOD_MODEL_DESCRIBEVODEDITINGUSAGEDATAREQUEST_H_
