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

#ifndef ALIBABACLOUD_MSE_MODEL_QUERYCONFIGRESULT_H_
#define ALIBABACLOUD_MSE_MODEL_QUERYCONFIGRESULT_H_

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
			class ALIBABACLOUD_MSE_EXPORT QueryConfigResult : public ServiceResult
			{
			public:
				struct Data
				{
					std::string maxClientCnxns;
					bool mCPEnabled;
					std::string maxSessionTimeout;
					std::string userName;
					bool openSuperAcl;
					std::string tickTime;
					bool namingCreateServiceSupported;
					bool configSecretSupported;
					std::string autopurgeSnapRetainCount;
					std::string initLimit;
					std::string passWord;
					std::string jvmFlagsCustom;
					bool configAuthEnabled;
					bool restartFlag;
					std::string autopurgePurgeInterval;
					std::string juteMaxbuffer;
					bool mCPSupported;
					std::string minSessionTimeout;
					std::string clusterName;
					bool configSecretEnabled;
					bool configAuthSupported;
					std::string syncLimit;
				};


				QueryConfigResult();
				explicit QueryConfigResult(const std::string &payload);
				~QueryConfigResult();
				std::string getMessage()const;
				int getHttpStatusCode()const;
				Data getData()const;
				int getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				int httpStatusCode_;
				Data data_;
				int code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_MSE_MODEL_QUERYCONFIGRESULT_H_