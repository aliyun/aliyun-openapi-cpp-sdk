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

#ifndef ALIBABACLOUD_ENS_MODEL_DESCRIBEDATADISTRESULTREQUEST_H_
#define ALIBABACLOUD_ENS_MODEL_DESCRIBEDATADISTRESULTREQUEST_H_

#include <alibabacloud/ens/EnsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ens {
namespace Model {
class ALIBABACLOUD_ENS_EXPORT DescribeDataDistResultRequest : public RpcServiceRequest {
public:
	DescribeDataDistResultRequest();
	~DescribeDataDistResultRequest();
	std::string getDataVersions() const;
	void setDataVersions(const std::string &dataVersions);
	std::string getInstanceIds() const;
	void setInstanceIds(const std::string &instanceIds);
	std::string getMaxDate() const;
	void setMaxDate(const std::string &maxDate);
	int getPageNumber() const;
	void setPageNumber(int pageNumber);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::vector<std::string> getEnsRegionIds() const;
	void setEnsRegionIds(const std::vector<std::string> &ensRegionIds);
	std::string getMinDate() const;
	void setMinDate(const std::string &minDate);
	std::string getAppId() const;
	void setAppId(const std::string &appId);
	std::string getDataNames() const;
	void setDataNames(const std::string &dataNames);

private:
	std::string dataVersions_;
	std::string instanceIds_;
	std::string maxDate_;
	int pageNumber_;
	int pageSize_;
	std::vector<std::string> ensRegionIds_;
	std::string minDate_;
	std::string appId_;
	std::string dataNames_;
};
} // namespace Model
} // namespace Ens
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ENS_MODEL_DESCRIBEDATADISTRESULTREQUEST_H_
