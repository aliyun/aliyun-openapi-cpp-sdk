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

#ifndef ALIBABACLOUD_COMPUTENEST_MODEL_LISTSERVICEINSTANCERESOURCESREQUEST_H_
#define ALIBABACLOUD_COMPUTENEST_MODEL_LISTSERVICEINSTANCERESOURCESREQUEST_H_

#include <alibabacloud/computenest/ComputeNestExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace ComputeNest {
namespace Model {
class ALIBABACLOUD_COMPUTENEST_EXPORT ListServiceInstanceResourcesRequest : public RpcServiceRequest {
public:
	struct Tag {
		std::string value;
		std::string key;
	};
	ListServiceInstanceResourcesRequest();
	~ListServiceInstanceResourcesRequest();
	std::string getExpireTimeEnd() const;
	void setExpireTimeEnd(const std::string &expireTimeEnd);
	std::string getNextToken() const;
	void setNextToken(const std::string &nextToken);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getServiceInstanceResourceType() const;
	void setServiceInstanceResourceType(const std::string &serviceInstanceResourceType);
	std::vector<std::string> getResourceARN() const;
	void setResourceARN(const std::vector<std::string> &resourceARN);
	std::vector<Tag> getTag() const;
	void setTag(const std::vector<Tag> &tag);
	std::string getServiceInstanceId() const;
	void setServiceInstanceId(const std::string &serviceInstanceId);
	std::string getExpireTimeStart() const;
	void setExpireTimeStart(const std::string &expireTimeStart);
	int getMaxResults() const;
	void setMaxResults(int maxResults);
	std::string getPayType() const;
	void setPayType(const std::string &payType);

private:
	std::string expireTimeEnd_;
	std::string nextToken_;
	std::string regionId_;
	std::string serviceInstanceResourceType_;
	std::vector<std::string> resourceARN_;
	std::vector<Tag> tag_;
	std::string serviceInstanceId_;
	std::string expireTimeStart_;
	int maxResults_;
	std::string payType_;
};
} // namespace Model
} // namespace ComputeNest
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_COMPUTENEST_MODEL_LISTSERVICEINSTANCERESOURCESREQUEST_H_
