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

#ifndef ALIBABACLOUD_MSE_MODEL_GETSERVICELISTENERSRESULT_H_
#define ALIBABACLOUD_MSE_MODEL_GETSERVICELISTENERSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/mse/MseExport.h>

namespace AlibabaCloud
{
	namespace Mse
	{
		namespace Model
		{
			class ALIBABACLOUD_MSE_EXPORT GetServiceListenersResult : public ServiceResult
			{
			public:
				struct DataItem
				{
					std::string app;
					std::string agent;
					std::string serviceName;
					std::string iP;
					std::string port;
					std::string cluster;
					std::string namespaceId;
					std::string addr;
				};


				GetServiceListenersResult();
				explicit GetServiceListenersResult(const std::string &payload);
				~GetServiceListenersResult();
				std::string getHttpCode()const;
				int getTotalCount()const;
				int getPageSize()const;
				std::string getMessage()const;
				int getPageNumber()const;
				std::vector<DataItem> getData()const;
				std::string getErrorCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string httpCode_;
				int totalCount_;
				int pageSize_;
				std::string message_;
				int pageNumber_;
				std::vector<DataItem> data_;
				std::string errorCode_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_MSE_MODEL_GETSERVICELISTENERSRESULT_H_