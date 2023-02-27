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

#ifndef ALIBABACLOUD_ICE_MODEL_GETSNAPSHOTURLSREQUEST_H_
#define ALIBABACLOUD_ICE_MODEL_GETSNAPSHOTURLSREQUEST_H_

#include <alibabacloud/ice/ICEExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace ICE {
namespace Model {
class ALIBABACLOUD_ICE_EXPORT GetSnapshotUrlsRequest : public RpcServiceRequest {
public:
	GetSnapshotUrlsRequest();
	~GetSnapshotUrlsRequest();
	long getResourceRealOwnerId() const;
	void setResourceRealOwnerId(long resourceRealOwnerId);
	int getPageNumber() const;
	void setPageNumber(int pageNumber);
	long getTimeout() const;
	void setTimeout(long timeout);
	std::string getJobId() const;
	void setJobId(const std::string &jobId);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getOrderBy() const;
	void setOrderBy(const std::string &orderBy);

private:
	long resourceRealOwnerId_;
	int pageNumber_;
	long timeout_;
	std::string jobId_;
	int pageSize_;
	std::string orderBy_;
};
} // namespace Model
} // namespace ICE
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ICE_MODEL_GETSNAPSHOTURLSREQUEST_H_
