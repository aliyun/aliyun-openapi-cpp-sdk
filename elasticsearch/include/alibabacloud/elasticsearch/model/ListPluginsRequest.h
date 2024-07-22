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

#ifndef ALIBABACLOUD_ELASTICSEARCH_MODEL_LISTPLUGINSREQUEST_H_
#define ALIBABACLOUD_ELASTICSEARCH_MODEL_LISTPLUGINSREQUEST_H_

#include <alibabacloud/elasticsearch/ElasticsearchExport.h>
#include <alibabacloud/core/RoaServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Elasticsearch {
namespace Model {
class ALIBABACLOUD_ELASTICSEARCH_EXPORT ListPluginsRequest : public RoaServiceRequest {
public:
	ListPluginsRequest();
	~ListPluginsRequest();
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	int getSize() const;
	void setSize(int size);
	std::string getName() const;
	void setName(const std::string &name);
	std::string getPage() const;
	void setPage(const std::string &page);
	std::string getSource() const;
	void setSource(const std::string &source);

private:
	std::string instanceId_;
	int size_;
	std::string name_;
	std::string page_;
	std::string source_;
};
} // namespace Model
} // namespace Elasticsearch
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ELASTICSEARCH_MODEL_LISTPLUGINSREQUEST_H_
