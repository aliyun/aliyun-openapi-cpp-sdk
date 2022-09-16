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

#ifndef ALIBABACLOUD_ECD_MODEL_DESCRIBEINVOCATIONSRESULT_H_
#define ALIBABACLOUD_ECD_MODEL_DESCRIBEINVOCATIONSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ecd/EcdExport.h>

namespace AlibabaCloud
{
	namespace Ecd
	{
		namespace Model
		{
			class ALIBABACLOUD_ECD_EXPORT DescribeInvocationsResult : public ServiceResult
			{
			public:
				struct Invocation
				{
					struct InvokeDesktop
					{
						int dropped;
						std::string invocationStatus;
						long exitCode;
						std::string errorInfo;
						std::string startTime;
						std::string desktopId;
						int repeats;
						std::string finishTime;
						std::string output;
						std::string creationTime;
						std::string updateTime;
						std::string errorCode;
						std::string stopTime;
					};
					std::string commandContent;
					std::string invocationStatus;
					std::string endUserId;
					std::string commandType;
					std::string creationTime;
					std::vector<Invocation::InvokeDesktop> invokeDesktops;
					std::string invokeId;
				};


				DescribeInvocationsResult();
				explicit DescribeInvocationsResult(const std::string &payload);
				~DescribeInvocationsResult();
				std::string getNextToken()const;
				std::vector<Invocation> getInvocations()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string nextToken_;
				std::vector<Invocation> invocations_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ECD_MODEL_DESCRIBEINVOCATIONSRESULT_H_