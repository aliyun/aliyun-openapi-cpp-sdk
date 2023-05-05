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

#ifndef ALIBABACLOUD_ECD_MODEL_DESCRIBECDSFILESHARELINKSREQUEST_H_
#define ALIBABACLOUD_ECD_MODEL_DESCRIBECDSFILESHARELINKSREQUEST_H_

#include <alibabacloud/ecd/EcdExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ecd {
namespace Model {
class ALIBABACLOUD_ECD_EXPORT DescribeCdsFileShareLinksRequest : public RpcServiceRequest {
public:
	DescribeCdsFileShareLinksRequest();
	~DescribeCdsFileShareLinksRequest();
	std::vector<std::string> getCreators() const;
	void setCreators(const std::vector<std::string> &creators);
	std::string getShareId() const;
	void setShareId(const std::string &shareId);
	std::string getCdsId() const;
	void setCdsId(const std::string &cdsId);
	std::string getShareName() const;
	void setShareName(const std::string &shareName);
	std::string getNextToken() const;
	void setNextToken(const std::string &nextToken);
	int getMaxResults() const;
	void setMaxResults(int maxResults);
	std::string getStatus() const;
	void setStatus(const std::string &status);

private:
	std::vector<std::string> creators_;
	std::string shareId_;
	std::string cdsId_;
	std::string shareName_;
	std::string nextToken_;
	int maxResults_;
	std::string status_;
};
} // namespace Model
} // namespace Ecd
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ECD_MODEL_DESCRIBECDSFILESHARELINKSREQUEST_H_
