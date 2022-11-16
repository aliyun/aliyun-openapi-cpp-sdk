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

#ifndef ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_TESTDATASERVICEAPIREQUEST_H_
#define ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_TESTDATASERVICEAPIREQUEST_H_

#include <alibabacloud/dataworks-public/Dataworks_publicExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Dataworks_public {
namespace Model {
class ALIBABACLOUD_DATAWORKS_PUBLIC_EXPORT TestDataServiceApiRequest : public RpcServiceRequest {
public:
	struct PathParams {
		std::string paramKey;
		std::string paramValue;
	};
	struct QueryParam {
		std::string paramKey;
		std::string paramValue;
	};
	struct HeadParams {
		std::string paramKey;
		std::string paramValue;
	};
	struct BodyParams {
		std::string paramKey;
		std::string paramValue;
	};
	TestDataServiceApiRequest();
	~TestDataServiceApiRequest();
	std::vector<PathParams> getPathParams() const;
	void setPathParams(const std::vector<PathParams> &pathParams);
	std::vector<QueryParam> getQueryParam() const;
	void setQueryParam(const std::vector<QueryParam> &queryParam);
	std::vector<HeadParams> getHeadParams() const;
	void setHeadParams(const std::vector<HeadParams> &headParams);
	std::string getBodyContent() const;
	void setBodyContent(const std::string &bodyContent);
	std::vector<BodyParams> getBodyParams() const;
	void setBodyParams(const std::vector<BodyParams> &bodyParams);
	long getApiId() const;
	void setApiId(long apiId);

private:
	std::vector<PathParams> pathParams_;
	std::vector<QueryParam> queryParam_;
	std::vector<HeadParams> headParams_;
	std::string bodyContent_;
	std::vector<BodyParams> bodyParams_;
	long apiId_;
};
} // namespace Model
} // namespace Dataworks_public
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_TESTDATASERVICEAPIREQUEST_H_
