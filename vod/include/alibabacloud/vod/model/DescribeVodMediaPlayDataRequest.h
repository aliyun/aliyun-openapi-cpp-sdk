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

#ifndef ALIBABACLOUD_VOD_MODEL_DESCRIBEVODMEDIAPLAYDATAREQUEST_H_
#define ALIBABACLOUD_VOD_MODEL_DESCRIBEVODMEDIAPLAYDATAREQUEST_H_

#include <alibabacloud/vod/VodExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Vod {
namespace Model {
class ALIBABACLOUD_VOD_EXPORT DescribeVodMediaPlayDataRequest : public RpcServiceRequest {
public:
	DescribeVodMediaPlayDataRequest();
	~DescribeVodMediaPlayDataRequest();
	long getPageSize() const;
	void setPageSize(long pageSize);
	std::string getPlayDate() const;
	void setPlayDate(const std::string &playDate);
	std::string getOs() const;
	void setOs(const std::string &os);
	std::string getMediaId() const;
	void setMediaId(const std::string &mediaId);
	std::string getOrderName() const;
	void setOrderName(const std::string &orderName);
	long getPageNo() const;
	void setPageNo(long pageNo);
	std::string getRegion() const;
	void setRegion(const std::string &region);
	std::string getTerminalType() const;
	void setTerminalType(const std::string &terminalType);
	std::string getOrderType() const;
	void setOrderType(const std::string &orderType);

private:
	long pageSize_;
	std::string playDate_;
	std::string os_;
	std::string mediaId_;
	std::string orderName_;
	long pageNo_;
	std::string region_;
	std::string terminalType_;
	std::string orderType_;
};
} // namespace Model
} // namespace Vod
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_VOD_MODEL_DESCRIBEVODMEDIAPLAYDATAREQUEST_H_
