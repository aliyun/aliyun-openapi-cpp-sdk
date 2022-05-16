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

#ifndef ALIBABACLOUD_SAE_MODEL_LISTCHANGEORDERSREQUEST_H_
#define ALIBABACLOUD_SAE_MODEL_LISTCHANGEORDERSREQUEST_H_

#include <alibabacloud/sae/SaeExport.h>
#include <alibabacloud/core/RoaServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Sae {
namespace Model {
class ALIBABACLOUD_SAE_EXPORT ListChangeOrdersRequest : public RoaServiceRequest {
public:
	ListChangeOrdersRequest();
	~ListChangeOrdersRequest();
	std::string getCoType() const;
	void setCoType(const std::string &coType);
	std::string getAppId() const;
	void setAppId(const std::string &appId);
	int getPageSize() const;
	void setPageSize(int pageSize);
	int getCurrentPage() const;
	void setCurrentPage(int currentPage);
	std::string getCoStatus() const;
	void setCoStatus(const std::string &coStatus);
	std::string getKey() const;
	void setKey(const std::string &key);

private:
	std::string coType_;
	std::string appId_;
	int pageSize_;
	int currentPage_;
	std::string coStatus_;
	std::string key_;
};
} // namespace Model
} // namespace Sae
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_SAE_MODEL_LISTCHANGEORDERSREQUEST_H_
