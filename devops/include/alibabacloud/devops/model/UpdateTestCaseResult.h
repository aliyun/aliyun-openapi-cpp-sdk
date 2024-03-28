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

#ifndef ALIBABACLOUD_DEVOPS_MODEL_UPDATETESTCASERESULT_H_
#define ALIBABACLOUD_DEVOPS_MODEL_UPDATETESTCASERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/devops/DevopsExport.h>

namespace AlibabaCloud
{
	namespace Devops
	{
		namespace Model
		{
			class ALIBABACLOUD_DEVOPS_EXPORT UpdateTestCaseResult : public ServiceResult
			{
			public:
				struct Testcase
				{
					struct AssignedTo
					{
						std::string assignIdentifier;
						std::string tbRoleId;
						std::string name;
					};
					struct Creator
					{
						std::string createIdentifier;
						std::string name;
					};
					struct Modifier
					{
						std::string modifyIdentifier;
						std::string name;
					};
					struct Directory
					{
						std::string childIdentifier;
						std::string directoryIdentifier;
						std::vector<std::string> pathName;
						std::string name;
					};
					struct DetailInfo
					{
						struct Precondition
						{
							std::string preContent;
							std::string preContentType;
							std::string preIdentifier;
						};
						struct StepContent
						{
							std::string stepIdentifier;
							std::string stepContentType;
							std::string stepContent;
						};
						struct ExpectedResult
						{
							std::string expectIdentifier;
							std::string expectContentType;
							std::string expectContent;
						};
						ExpectedResult expectedResult;
						Precondition precondition;
						std::string stepType;
						StepContent stepContent;
					};
					AssignedTo assignedTo;
					std::string identifier;
					std::string spaceIdentifier;
					DetailInfo detailInfo;
					std::string spaceType;
					std::string categoryIdentifier;
					Creator creator;
					Modifier modifier;
					std::string subject;
					Directory directory;
				};


				UpdateTestCaseResult();
				explicit UpdateTestCaseResult(const std::string &payload);
				~UpdateTestCaseResult();
				Testcase getTestcase()const;
				std::string getRequestId()const;
				std::string getErrorMsg()const;
				std::string getErrorCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				Testcase testcase_;
				std::string requestId_;
				std::string errorMsg_;
				std::string errorCode_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DEVOPS_MODEL_UPDATETESTCASERESULT_H_