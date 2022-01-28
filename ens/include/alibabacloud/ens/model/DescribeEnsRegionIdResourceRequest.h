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

#ifndef ALIBABACLOUD_ENS_MODEL_DESCRIBEENSREGIONIDRESOURCEREQUEST_H_
#define ALIBABACLOUD_ENS_MODEL_DESCRIBEENSREGIONIDRESOURCEREQUEST_H_

#include <alibabacloud/ens/EnsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ens {
namespace Model {
class ALIBABACLOUD_ENS_EXPORT DescribeEnsRegionIdResourceRequest : public RpcServiceRequest {
public:
	DescribeEnsRegionIdResourceRequest();
	~DescribeEnsRegionIdResourceRequest();
	std::string getIsp() const;
	void setIsp(const std::string &isp);
	std::string getStartTime() const;
	void setStartTime(const std::string &startTime);
	int getPageNumber() const;
	void setPageNumber(int pageNumber);
	std::string getOrderByParams() const;
	void setOrderByParams(const std::string &orderByParams);
	std::string getPageSize() const;
	void setPageSize(const std::string &pageSize);
	std::string getEndTime() const;
	void setEndTime(const std::string &endTime);

private:
	std::string isp_;
	std::string startTime_;
	int pageNumber_;
	std::string orderByParams_;
	std::string pageSize_;
	std::string endTime_;
};
} // namespace Model
} // namespace Ens
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ENS_MODEL_DESCRIBEENSREGIONIDRESOURCEREQUEST_H_
