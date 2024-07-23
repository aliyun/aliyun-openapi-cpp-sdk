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

#ifndef ALIBABACLOUD_MTS_MODEL_QUERYTRACEM3U8JOBREQUEST_H_
#define ALIBABACLOUD_MTS_MODEL_QUERYTRACEM3U8JOBREQUEST_H_

#include <alibabacloud/mts/MtsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Mts {
namespace Model {
class ALIBABACLOUD_MTS_EXPORT QueryTraceM3u8JobRequest : public RpcServiceRequest {
public:
	QueryTraceM3u8JobRequest();
	~QueryTraceM3u8JobRequest();
	long getLevel() const;
	void setLevel(long level);
	long getMessageId() const;
	void setMessageId(long messageId);
	long getPageNumber() const;
	void setPageNumber(long pageNumber);
	long getCreateTimeEnd() const;
	void setCreateTimeEnd(long createTimeEnd);
	std::string getJobId() const;
	void setJobId(const std::string &jobId);
	long getPageSize() const;
	void setPageSize(long pageSize);
	long getCreateTimeStart() const;
	void setCreateTimeStart(long createTimeStart);

private:
	long level_;
	long messageId_;
	long pageNumber_;
	long createTimeEnd_;
	std::string jobId_;
	long pageSize_;
	long createTimeStart_;
};
} // namespace Model
} // namespace Mts
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_MTS_MODEL_QUERYTRACEM3U8JOBREQUEST_H_
