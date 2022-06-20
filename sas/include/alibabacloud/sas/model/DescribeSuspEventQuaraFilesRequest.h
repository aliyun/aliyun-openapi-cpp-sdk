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

#ifndef ALIBABACLOUD_SAS_MODEL_DESCRIBESUSPEVENTQUARAFILESREQUEST_H_
#define ALIBABACLOUD_SAS_MODEL_DESCRIBESUSPEVENTQUARAFILESREQUEST_H_

#include <alibabacloud/sas/SasExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Sas {
namespace Model {
class ALIBABACLOUD_SAS_EXPORT DescribeSuspEventQuaraFilesRequest : public RpcServiceRequest {
public:
	DescribeSuspEventQuaraFilesRequest();
	~DescribeSuspEventQuaraFilesRequest();
	std::string getSourceIp() const;
	void setSourceIp(const std::string &sourceIp);
	std::string getPageSize() const;
	void setPageSize(const std::string &pageSize);
	std::string getFrom() const;
	void setFrom(const std::string &from);
	long getGroupingId() const;
	void setGroupingId(long groupingId);
	std::string getGroupId() const;
	void setGroupId(const std::string &groupId);
	std::string getCurrentPage() const;
	void setCurrentPage(const std::string &currentPage);
	std::string getQuaraTag() const;
	void setQuaraTag(const std::string &quaraTag);
	std::string getStatus() const;
	void setStatus(const std::string &status);

private:
	std::string sourceIp_;
	std::string pageSize_;
	std::string from_;
	long groupingId_;
	std::string groupId_;
	std::string currentPage_;
	std::string quaraTag_;
	std::string status_;
};
} // namespace Model
} // namespace Sas
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_SAS_MODEL_DESCRIBESUSPEVENTQUARAFILESREQUEST_H_
