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

#ifndef ALIBABACLOUD_RDS_DATA_MODEL_SELECTREQUEST_H_
#define ALIBABACLOUD_RDS_DATA_MODEL_SELECTREQUEST_H_

#include <alibabacloud/rds-data/Rds_dataExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Rds_data {
namespace Model {
class ALIBABACLOUD_RDS_DATA_EXPORT SelectRequest : public RpcServiceRequest {
public:
	SelectRequest();
	~SelectRequest();
	std::string getTransactionId() const;
	void setTransactionId(const std::string &transactionId);
	long getPageNumber() const;
	void setPageNumber(long pageNumber);
	std::string getFilter() const;
	void setFilter(const std::string &filter);
	std::string getDatabase() const;
	void setDatabase(const std::string &database);
	long getPageSize() const;
	void setPageSize(long pageSize);
	std::string getResourceArn() const;
	void setResourceArn(const std::string &resourceArn);
	std::string getTable() const;
	void setTable(const std::string &table);
	std::string getSecretArn() const;
	void setSecretArn(const std::string &secretArn);

private:
	std::string transactionId_;
	long pageNumber_;
	std::string filter_;
	std::string database_;
	long pageSize_;
	std::string resourceArn_;
	std::string table_;
	std::string secretArn_;
};
} // namespace Model
} // namespace Rds_data
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_RDS_DATA_MODEL_SELECTREQUEST_H_
