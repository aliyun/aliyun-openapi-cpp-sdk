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

#ifndef ALIBABACLOUD_COMPUTENESTSUPPLIER_MODEL_LISTSERVICEUSAGESREQUEST_H_
#define ALIBABACLOUD_COMPUTENESTSUPPLIER_MODEL_LISTSERVICEUSAGESREQUEST_H_

#include <alibabacloud/computenestsupplier/ComputeNestSupplierExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace ComputeNestSupplier {
namespace Model {
class ALIBABACLOUD_COMPUTENESTSUPPLIER_EXPORT ListServiceUsagesRequest : public RpcServiceRequest {
public:
	struct Filter {
		std::string name;
	};
	ListServiceUsagesRequest();
	~ListServiceUsagesRequest();
	std::string getNextToken() const;
	void setNextToken(const std::string &nextToken);
	std::vector<Filter> getFilter() const;
	void setFilter(const std::vector<Filter> &filter);
	int getMaxResults() const;
	void setMaxResults(int maxResults);

private:
	std::string nextToken_;
	std::vector<Filter> filter_;
	int maxResults_;
};
} // namespace Model
} // namespace ComputeNestSupplier
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_COMPUTENESTSUPPLIER_MODEL_LISTSERVICEUSAGESREQUEST_H_
