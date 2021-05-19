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

#ifndef ALIBABACLOUD_SCSP_MODEL_GETOUTERCALLCENTERDATALISTRESULT_H_
#define ALIBABACLOUD_SCSP_MODEL_GETOUTERCALLCENTERDATALISTRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/scsp/ScspExport.h>

namespace AlibabaCloud
{
	namespace Scsp
	{
		namespace Model
		{
			class ALIBABACLOUD_SCSP_EXPORT GetOuterCallCenterDataListResult : public ServiceResult
			{
			public:
				struct DataItem
				{
					std::string toPhoneNum;
					std::string fromPhoneNum;
					std::string acid;
					std::string endReason;
					std::string extInfo;
					std::string callType;
					std::string userInfo;
					std::string bizType;
					std::string interveneTime;
					std::string bizId;
					std::string sessionId;
				};


				GetOuterCallCenterDataListResult();
				explicit GetOuterCallCenterDataListResult(const std::string &payload);
				~GetOuterCallCenterDataListResult();
				std::string getMessage()const;
				long getHttpStatusCode()const;
				std::vector<DataItem> getData()const;
				std::string getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				long httpStatusCode_;
				std::vector<DataItem> data_;
				std::string code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SCSP_MODEL_GETOUTERCALLCENTERDATALISTRESULT_H_