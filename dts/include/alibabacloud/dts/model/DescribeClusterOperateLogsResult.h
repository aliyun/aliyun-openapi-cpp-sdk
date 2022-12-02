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

#ifndef ALIBABACLOUD_DTS_MODEL_DESCRIBECLUSTEROPERATELOGSRESULT_H_
#define ALIBABACLOUD_DTS_MODEL_DESCRIBECLUSTEROPERATELOGSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/dts/DtsExport.h>

namespace AlibabaCloud
{
	namespace Dts
	{
		namespace Model
		{
			class ALIBABACLOUD_DTS_EXPORT DescribeClusterOperateLogsResult : public ServiceResult
			{
			public:
				struct DataPoint
				{
					std::string operationName;
					long logDatetime;
					std::string oldValue;
					std::string content;
					std::string operationUser;
					std::string newValue;
					std::string id;
					int success;
				};


				DescribeClusterOperateLogsResult();
				explicit DescribeClusterOperateLogsResult(const std::string &payload);
				~DescribeClusterOperateLogsResult();
				long getTotalRecordCount()const;
				int getPageRecordCount()const;
				int getPageNumber()const;
				int getHttpStatusCode()const;
				std::vector<DataPoint> getDataPoints()const;
				std::string getDynamicMessage()const;
				std::string getErrMessage()const;
				std::string getCode()const;
				bool getSuccess()const;
				std::string getErrCode()const;

			protected:
				void parse(const std::string &payload);
			private:
				long totalRecordCount_;
				int pageRecordCount_;
				int pageNumber_;
				int httpStatusCode_;
				std::vector<DataPoint> dataPoints_;
				std::string dynamicMessage_;
				std::string errMessage_;
				std::string code_;
				bool success_;
				std::string errCode_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DTS_MODEL_DESCRIBECLUSTEROPERATELOGSRESULT_H_