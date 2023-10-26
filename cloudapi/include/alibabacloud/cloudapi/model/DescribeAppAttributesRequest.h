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

#ifndef ALIBABACLOUD_CLOUDAPI_MODEL_DESCRIBEAPPATTRIBUTESREQUEST_H_
#define ALIBABACLOUD_CLOUDAPI_MODEL_DESCRIBEAPPATTRIBUTESREQUEST_H_

#include <alibabacloud/cloudapi/CloudAPIExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace CloudAPI {
namespace Model {
class ALIBABACLOUD_CLOUDAPI_EXPORT DescribeAppAttributesRequest : public RpcServiceRequest {
public:
	struct Tag {
		std::string value;
		std::string key;
	};
	DescribeAppAttributesRequest();
	~DescribeAppAttributesRequest();
	std::string getStageName() const;
	void setStageName(const std::string &stageName);
	int getPageNumber() const;
	void setPageNumber(int pageNumber);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getAppName() const;
	void setAppName(const std::string &appName);
	std::string getSecurityToken() const;
	void setSecurityToken(const std::string &securityToken);
	std::string getExcludeApiId() const;
	void setExcludeApiId(const std::string &excludeApiId);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::vector<Tag> getTag() const;
	void setTag(const std::vector<Tag> &tag);
	std::string getSort() const;
	void setSort(const std::string &sort);
	bool getEnableTagAuth() const;
	void setEnableTagAuth(bool enableTagAuth);
	std::string getExtend() const;
	void setExtend(const std::string &extend);
	std::string getExcludeApiProductId() const;
	void setExcludeApiProductId(const std::string &excludeApiProductId);
	long getAppId() const;
	void setAppId(long appId);
	std::string getAppCode() const;
	void setAppCode(const std::string &appCode);
	std::string getAppKey() const;
	void setAppKey(const std::string &appKey);

private:
	std::string stageName_;
	int pageNumber_;
	std::string accessKeyId_;
	std::string appName_;
	std::string securityToken_;
	std::string excludeApiId_;
	int pageSize_;
	std::vector<Tag> tag_;
	std::string sort_;
	bool enableTagAuth_;
	std::string extend_;
	std::string excludeApiProductId_;
	long appId_;
	std::string appCode_;
	std::string appKey_;
};
} // namespace Model
} // namespace CloudAPI
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CLOUDAPI_MODEL_DESCRIBEAPPATTRIBUTESREQUEST_H_
