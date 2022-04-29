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

#ifndef ALIBABACLOUD_NAS_MODEL_LISTRECYCLEBINJOBSREQUEST_H_
#define ALIBABACLOUD_NAS_MODEL_LISTRECYCLEBINJOBSREQUEST_H_

#include <alibabacloud/nas/NASExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace NAS {
namespace Model {
class ALIBABACLOUD_NAS_EXPORT ListRecycleBinJobsRequest : public RpcServiceRequest {
public:
	ListRecycleBinJobsRequest();
	~ListRecycleBinJobsRequest();
	long getPageNumber() const;
	void setPageNumber(long pageNumber);
	std::string getJobId() const;
	void setJobId(const std::string &jobId);
	long getPageSize() const;
	void setPageSize(long pageSize);
	std::string getFileSystemId() const;
	void setFileSystemId(const std::string &fileSystemId);
	std::string getStatus() const;
	void setStatus(const std::string &status);

private:
	long pageNumber_;
	std::string jobId_;
	long pageSize_;
	std::string fileSystemId_;
	std::string status_;
};
} // namespace Model
} // namespace NAS
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_NAS_MODEL_LISTRECYCLEBINJOBSREQUEST_H_
