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

#ifndef ALIBABACLOUD_MSE_MODEL_CREATEORUPDATESWIMMINGLANEGROUPRESULT_H_
#define ALIBABACLOUD_MSE_MODEL_CREATEORUPDATESWIMMINGLANEGROUPRESULT_H_

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
			class ALIBABACLOUD_MSE_EXPORT CreateOrUpdateSwimmingLaneGroupResult : public ServiceResult
			{
			public:
				struct Data
				{
					std::string region11;
					int status13;
					bool messageQueueGrayEnable;
					std::string entryApp10;
					std::string _namespace8;
					std::string source;
					std::string name;
					std::string messageQueueFilterSide;
					std::string enable;
					std::vector<std::string> applicationList;
					bool recordCanaryDetail;
					std::string name1;
					long id9;
					std::string entryApp;
					int status;
					std::string messageQueueFilterSide5;
					std::string _namespace;
					std::string source3;
					std::string dbGrayEnable;
					std::string userId;
					std::string region;
					std::string dbGrayEnable2;
					long id;
					std::string enable7;
					std::string userId4;
					std::string appIds;
					std::string appIds6;
					bool messageQueueGrayEnable12;
				};


				CreateOrUpdateSwimmingLaneGroupResult();
				explicit CreateOrUpdateSwimmingLaneGroupResult(const std::string &payload);
				~CreateOrUpdateSwimmingLaneGroupResult();
				std::string getMessage()const;
				Data getData()const;
				std::string getErrorCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				Data data_;
				std::string errorCode_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_MSE_MODEL_CREATEORUPDATESWIMMINGLANEGROUPRESULT_H_