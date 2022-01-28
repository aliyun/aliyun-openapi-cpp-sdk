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

#ifndef ALIBABACLOUD_ENS_MODEL_LISTAPPLICATIONSREQUEST_H_
#define ALIBABACLOUD_ENS_MODEL_LISTAPPLICATIONSREQUEST_H_

#include <alibabacloud/ens/EnsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ens {
namespace Model {
class ALIBABACLOUD_ENS_EXPORT ListApplicationsRequest : public RpcServiceRequest {
public:
	ListApplicationsRequest();
	~ListApplicationsRequest();
	std::string getClusterNames() const;
	void setClusterNames(const std::string &clusterNames);
	std::string getLevel() const;
	void setLevel(const std::string &level);
	std::string getOutAppInfoParams() const;
	void setOutAppInfoParams(const std::string &outAppInfoParams);
	std::string getMaxDate() const;
	void setMaxDate(const std::string &maxDate);
	int getPageNumber() const;
	void setPageNumber(int pageNumber);
	std::string getAppVersions() const;
	void setAppVersions(const std::string &appVersions);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getMinDate() const;
	void setMinDate(const std::string &minDate);

private:
	std::string clusterNames_;
	std::string level_;
	std::string outAppInfoParams_;
	std::string maxDate_;
	int pageNumber_;
	std::string appVersions_;
	int pageSize_;
	std::string minDate_;
};
} // namespace Model
} // namespace Ens
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ENS_MODEL_LISTAPPLICATIONSREQUEST_H_
