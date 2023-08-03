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

#ifndef ALIBABACLOUD_RDS_DATA_MODEL_EXECUTESTATEMENTREQUEST_H_
#define ALIBABACLOUD_RDS_DATA_MODEL_EXECUTESTATEMENTREQUEST_H_

#include <alibabacloud/rds-data/Rds_dataExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Rds_data {
namespace Model {
class ALIBABACLOUD_RDS_DATA_EXPORT ExecuteStatementRequest : public RpcServiceRequest {
public:
	struct ResultSetOptions {
		std::string decimalReturnType;
		std::string longReturnType;
	};
	struct Parameters {
		std::string name;
		std::string typeHint;
		struct Value {
			std::string arrayValue;
			std::string blobValue;
			bool booleanValue;
			bool isNull;
			long longValue;
			std::string stringValue;
		};
		Value value;
	};
	ExecuteStatementRequest();
	~ExecuteStatementRequest();
	bool getIncludeResultMetadata() const;
	void setIncludeResultMetadata(bool includeResultMetadata);
	std::string getFormatRecordsAs() const;
	void setFormatRecordsAs(const std::string &formatRecordsAs);
	std::string getTransactionId() const;
	void setTransactionId(const std::string &transactionId);
	std::string getSql() const;
	void setSql(const std::string &sql);
	ResultSetOptions getResultSetOptions() const;
	void setResultSetOptions(const ResultSetOptions &resultSetOptions);
	std::string getDatabase() const;
	void setDatabase(const std::string &database);
	std::string getResourceArn() const;
	void setResourceArn(const std::string &resourceArn);
	std::vector<Parameters> getParameters() const;
	void setParameters(const std::vector<Parameters> &parameters);
	bool getContinueAfterTimeout() const;
	void setContinueAfterTimeout(bool continueAfterTimeout);
	std::string getSecretArn() const;
	void setSecretArn(const std::string &secretArn);

private:
	bool includeResultMetadata_;
	std::string formatRecordsAs_;
	std::string transactionId_;
	std::string sql_;
	ResultSetOptions resultSetOptions_;
	std::string database_;
	std::string resourceArn_;
	std::vector<Parameters> parameters_;
	bool continueAfterTimeout_;
	std::string secretArn_;
};
} // namespace Model
} // namespace Rds_data
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_RDS_DATA_MODEL_EXECUTESTATEMENTREQUEST_H_
