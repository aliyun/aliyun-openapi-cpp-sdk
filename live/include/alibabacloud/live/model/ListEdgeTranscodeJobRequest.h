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

#ifndef ALIBABACLOUD_LIVE_MODEL_LISTEDGETRANSCODEJOBREQUEST_H_
#define ALIBABACLOUD_LIVE_MODEL_LISTEDGETRANSCODEJOBREQUEST_H_

#include <alibabacloud/live/LiveExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Live {
namespace Model {
class ALIBABACLOUD_LIVE_EXPORT ListEdgeTranscodeJobRequest : public RpcServiceRequest {
public:
	ListEdgeTranscodeJobRequest();
	~ListEdgeTranscodeJobRequest();
	std::string getType() const;
	void setType(const std::string &type);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getKeyword() const;
	void setKeyword(const std::string &keyword);
	std::string getClusterId() const;
	void setClusterId(const std::string &clusterId);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	int getPageNo() const;
	void setPageNo(int pageNo);
	std::string getSortBy() const;
	void setSortBy(const std::string &sortBy);
	int getStatus() const;
	void setStatus(int status);

private:
	std::string type_;
	std::string regionId_;
	int pageSize_;
	std::string keyword_;
	std::string clusterId_;
	long ownerId_;
	int pageNo_;
	std::string sortBy_;
	int status_;
};
} // namespace Model
} // namespace Live
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_LIVE_MODEL_LISTEDGETRANSCODEJOBREQUEST_H_
