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

#ifndef ALIBABACLOUD_EFLO_MODEL_LISTVPDSREQUEST_H_
#define ALIBABACLOUD_EFLO_MODEL_LISTVPDSREQUEST_H_

#include <alibabacloud/eflo/EfloExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Eflo {
namespace Model {
class ALIBABACLOUD_EFLO_EXPORT ListVpdsRequest : public RpcServiceRequest {
public:
	struct Tag {
		std::string value;
		std::string key;
	};
	ListVpdsRequest();
	~ListVpdsRequest();
	std::string getVpdName() const;
	void setVpdName(const std::string &vpdName);
	int getPageNumber() const;
	void setPageNumber(int pageNumber);
	bool getWithDependence() const;
	void setWithDependence(bool withDependence);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	bool getWithoutVcc() const;
	void setWithoutVcc(bool withoutVcc);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::vector<Tag> getTag() const;
	void setTag(const std::vector<Tag> &tag);
	bool getForSelect() const;
	void setForSelect(bool forSelect);
	std::string getFilterErId() const;
	void setFilterErId(const std::string &filterErId);
	std::string getVpdId() const;
	void setVpdId(const std::string &vpdId);
	bool getEnablePage() const;
	void setEnablePage(bool enablePage);
	std::string getStatus() const;
	void setStatus(const std::string &status);

private:
	std::string vpdName_;
	int pageNumber_;
	bool withDependence_;
	std::string resourceGroupId_;
	std::string regionId_;
	bool withoutVcc_;
	int pageSize_;
	std::vector<Tag> tag_;
	bool forSelect_;
	std::string filterErId_;
	std::string vpdId_;
	bool enablePage_;
	std::string status_;
};
} // namespace Model
} // namespace Eflo
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_EFLO_MODEL_LISTVPDSREQUEST_H_
