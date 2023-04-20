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

#ifndef ALIBABACLOUD_COMPUTENESTSUPPLIER_MODEL_LISTSERVICEINSTANCESREQUEST_H_
#define ALIBABACLOUD_COMPUTENESTSUPPLIER_MODEL_LISTSERVICEINSTANCESREQUEST_H_

#include <alibabacloud/computenestsupplier/ComputeNestSupplierExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace ComputeNestSupplier {
namespace Model {
class ALIBABACLOUD_COMPUTENESTSUPPLIER_EXPORT ListServiceInstancesRequest : public RpcServiceRequest {
public:
	struct Tag {
		std::string value;
		std::string key;
	};
	struct Filter {
		std::string name;
	};
	ListServiceInstancesRequest();
	~ListServiceInstancesRequest();
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getNextToken() const;
	void setNextToken(const std::string &nextToken);
	std::vector<Tag> getTag() const;
	void setTag(const std::vector<Tag> &tag);
	bool getShowDeleted() const;
	void setShowDeleted(bool showDeleted);
	std::vector<Filter> getFilter() const;
	void setFilter(const std::vector<Filter> &filter);
	std::string getMaxResults() const;
	void setMaxResults(const std::string &maxResults);

private:
	std::string regionId_;
	std::string nextToken_;
	std::vector<Tag> tag_;
	bool showDeleted_;
	std::vector<Filter> filter_;
	std::string maxResults_;
};
} // namespace Model
} // namespace ComputeNestSupplier
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_COMPUTENESTSUPPLIER_MODEL_LISTSERVICEINSTANCESREQUEST_H_
