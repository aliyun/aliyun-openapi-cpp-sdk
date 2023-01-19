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

#ifndef ALIBABACLOUD_SAS_MODEL_DESCRIBEVULNUMSTATISTICSREQUEST_H_
#define ALIBABACLOUD_SAS_MODEL_DESCRIBEVULNUMSTATISTICSREQUEST_H_

#include <alibabacloud/sas/SasExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Sas {
namespace Model {
class ALIBABACLOUD_SAS_EXPORT DescribeVulNumStatisticsRequest : public RpcServiceRequest {
public:
	DescribeVulNumStatisticsRequest();
	~DescribeVulNumStatisticsRequest();
	std::string getTargetType() const;
	void setTargetType(const std::string &targetType);
	long getStartTs() const;
	void setStartTs(long startTs);
	long getCreateTsStart() const;
	void setCreateTsStart(long createTsStart);
	std::string getContainerFieldName() const;
	void setContainerFieldName(const std::string &containerFieldName);
	std::string getSourceIp() const;
	void setSourceIp(const std::string &sourceIp);
	std::string getContainerFieldValue() const;
	void setContainerFieldValue(const std::string &containerFieldValue);
	long getEndTs() const;
	void setEndTs(long endTs);
	std::string getFrom() const;
	void setFrom(const std::string &from);
	std::vector<std::string> getNecessityList() const;
	void setNecessityList(const std::vector<std::string> &necessityList);
	std::string getClusterId() const;
	void setClusterId(const std::string &clusterId);
	std::string getIncludeApp() const;
	void setIncludeApp(const std::string &includeApp);
	long getCreateTsEnd() const;
	void setCreateTsEnd(long createTsEnd);
	std::string getUuids() const;
	void setUuids(const std::string &uuids);

private:
	std::string targetType_;
	long startTs_;
	long createTsStart_;
	std::string containerFieldName_;
	std::string sourceIp_;
	std::string containerFieldValue_;
	long endTs_;
	std::string from_;
	std::vector<std::string> necessityList_;
	std::string clusterId_;
	std::string includeApp_;
	long createTsEnd_;
	std::string uuids_;
};
} // namespace Model
} // namespace Sas
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_SAS_MODEL_DESCRIBEVULNUMSTATISTICSREQUEST_H_
